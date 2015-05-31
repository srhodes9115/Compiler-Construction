#include "symtab.h"

extern int yyparse();
extern int num_chars;
extern int num_lines; 

main () {
 FILE * myfile;
 int result = yyparse();
  if (result == 0) { /* yyparse() returns 0 if no erros were encountered */
    printf("Parse successful\n");
  } else {
    printf("Parse errors at line number %i column number %i \n",num_lines,num_chars-1);
  }
 myfile=fopen("output","w");
  printSymTab(myfile);
}
