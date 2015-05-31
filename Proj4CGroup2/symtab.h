/****************************************************/
/* File: symtab.h                                   */
/* Symbol table interface for the TINY compiler     */
/* (allows only one symbol table)                   */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _SYMTAB_H_
#define _SYMTAB_H_

/* Procedure st_insert inserts line numbers and
 * memory locations into the symbol table
 * loc = memory location is inserted only the
 * first time, otherwise ignored
 */
void st_insert( char * name, int JVM_num, int scope, int param, char*kind, int type, int sizeArray, int fCount);

/* Function st_lookup returns the memory 
 * location of a variable or -1 if not found
 */
int st_lookup( char * name );

/* Function st_lookupKind checks that the kind of the variable is used properly
 */
int st_lookupKind ( char * name, char*kind );

/* Function st_lookupType checks that the type of the variable is used properly
*/
int st_lookupType(char*name,int type);

/* function to look up the scope of a variable */
int st_lookupScope(char*name);

/*function to look up the number of parameters in a function*/
int st_lookupParam(char*name);


char*st_findKind(char*name);
/* Procedure printSymTab prints a formatted 
 * listing of the symbol table contents 
 * to the listing file
 */
void printSymTab(FILE * listing);

//void st_delete(char*name);

#endif
