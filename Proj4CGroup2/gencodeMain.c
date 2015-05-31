#include <stdio.h>
#include "symtab.h"

extern int yyparse();

main() {
  
 if (yyparse() == 0) {
    /* generated code written to stdout */
	FILE * myfile;
 	myfile=fopen("output","w");
 	printSymTab(myfile); 
  } else {
    printf("Compilation error.");
  }

}
