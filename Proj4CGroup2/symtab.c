/****************************************************/
/* File: symtab.c                                   */
/* Symbol table implementation for the TINY compiler*/
/* (allows only one symbol table)                   */
/* Symbol table is implemented as a chained         */
/* hash table                                       */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"
#include "token.tab.h"

extern int num_lines;
extern int num_chars;
/* SIZE is the size of the hash table */
#define SIZE 211

/* SHIFT is the power of two used as multiplier
   in hash function  */
#define SHIFT 4

/* the hash function */
static int hash ( char * key )
{ int temp = 0;
  int i = 0;
  while (key[i] != '\0')
  { temp = ((temp << SHIFT) + key[i]) % SIZE;
    ++i;
  }
  return temp;
}

/* The record in the bucket lists for
 * each variable, including name, 
 * assigned memory location, and
 * the list of line numbers in which
 * it appears in the source code
 */
typedef struct BucketListRec
   { char * name;
     int JVM_num;
     int scope;
     int param;
     char*kind;
     int type;
     int invalid;
     int size_array;
     int functCount;
     struct BucketListRec * next;
   } * BucketList;

/* the hash table */
static BucketList hashTable[SIZE];

/* Procedure st_insert inserts line numbers and
 * memory locations into the symbol table
 * loc = memory location is inserted only the
 * first time, otherwise ignored
 */
void st_insert( char * name, int JVM_num, int scope, int param, char*kind, int type, int size_array, int fCount)
{ int h = hash(name);
  BucketList l =  hashTable[h];
  while (l != NULL)
  {
	if ((strcmp(name,l->name) ==0) && (l->scope == scope) && (l->functCount==fCount)) //local variables
	{
		printf("Semantic error on %s: variable already declared within scope on line number %d column number %d\n", l->name,num_lines,num_chars);
		return;
	}
    l = l->next; 
  }
    l = (BucketList) malloc(sizeof(struct BucketListRec));
    l->name = name;
    l->scope = scope;
    l->param = param;
    l->kind = kind;
    l->type = type;
    l->JVM_num = JVM_num;
    l->size_array = size_array;
    l->functCount = fCount;
    if (l->scope != 0)
	{
		l->invalid = 0;
	}
    l->next = hashTable[h];
    hashTable[h] = l; 
} /* st_insert */

/* Function st_lookup returns the memory 
 * location of a variable or -1 if not found
 */
int st_lookup ( char * name )
{ int h = hash(name);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;
  if (l == NULL) return -1;
  else 
	{
	return l->JVM_num;
	}
}

/* Function st_findKind checks that the kind of the variable is used properly
 */
int st_lookupKind ( char * name, char*kind )
{ int h = hash(name);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;
  if (l->kind != kind) return -1;
  else 
	{
	return 1;
	}
}

char*st_findKind(char*name)
{
	int h = hash(name);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;
  if ((l != NULL))
	{
	  return l->kind;
	}
  else
	{ 
	   return -1;
	}	
}

/*Function st_lookupType checks that the type of the variable is used properly
*/
int st_lookupType(char*name,int type)
{
  int h = hash(name);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;
  if ((l != NULL) && (l->type != type))
	{
	 return -1;
	}
  else
	{ 
	return 1;
	}
}

/* Function st_lookupScope return the scope */
int st_lookupScope(char*name)
{
  int h = hash(name);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
  {
    l = l->next;
  }
  if (l != NULL)
	{ 
	  return l->scope;
	}
  else
	{ 
	   return -1;
	}
}

int st_lookupParam(char*name)
{
  int h = hash(name);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
  {
    l = l->next;
  }
  if (l != NULL)
	{ 
	  return l->param;
	}
  else
	{ 
	   return -1;
	}
}


int st_lookupFunctionType(char*name)
{
	int h = hash(name);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;
  if (l != NULL)
	{
	  return l->type;
	}
  else
	{ 
	   return -1;
	}
}


int st_lookupSize (char*name)
{
	int h = hash(name);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;
  if (l != NULL)
	{
	  return l->size_array;
	}
  else
	{ 
	   return -1;
	}
}

/* Procedure printSymTab prints a formatted 
 * listing of the symbol table contents 
 * to the listing file
 */
void printSymTab(FILE * listing)
{ int i;
  fprintf(listing,"Variable Name  JVM NUM  Scope  Param  Kind      Type    ArraySize     Invalid\n");
  fprintf(listing,"-------------  -------  -----  -----  ----      ----    ---------     -------\n");
  for (i=0;i<SIZE;++i)
  { if (hashTable[i] != NULL)
    { BucketList l = hashTable[i];
	//check for that main exists
	if(st_lookup("main") == -1)
	{
		printf("Main does not exist\n");
		return;
	}   		
      while (l != NULL)
      { 	 
	if (strcmp(l->kind,"array") == 0)
	{
		fprintf(listing,"%-14s ",l->name);
		fprintf(listing,"%-8d ",l->JVM_num);
		fprintf(listing,"%-7d ",l->scope);
		fprintf(listing,"      ");
		fprintf(listing,"%-10s ",l->kind);
		fprintf(listing,"%-4d ",l->type);
		fprintf(listing,"      %-4d ",l->size_array);
		if (l->scope != 0)
		{
			//l->invalid = 0;
			fprintf(listing,"        %-8d ",l->invalid);
		}
        	fprintf(listing,"\n");
	}
	else if (strcmp(l->kind,"function") == 0)
	{
		fprintf(listing,"%-14s ",l->name);
		fprintf(listing,"         "); //JVM spaces
		fprintf(listing,"%-7d ",l->scope);
		fprintf(listing,"%-5d ",l->param);
		fprintf(listing,"%-10s ",l->kind);
		fprintf(listing,"%-4d ",l->type);
        	fprintf(listing,"\n");
	}
	else
	{
		fprintf(listing,"%-14s ",l->name);
		fprintf(listing,"%-8d ",l->JVM_num);
		fprintf(listing,"%-7d ",l->scope);
		fprintf(listing,"      "); //param spaces
		fprintf(listing,"%-10s ",l->kind);
		fprintf(listing,"%-4d ",l->type);
		fprintf(listing,"             "); //array size spaces
		if (l->scope != 0)
		{
			//l->invalid = 0;
			fprintf(listing,"      %-8d ",l->invalid);
		}
        	fprintf(listing,"\n");
	}
        l = l->next;
      }
    }
  }
} /* printSymTab */
