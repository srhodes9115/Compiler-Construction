scan: 		scanMain.o lex.yy.o
		gcc -o scan scanMain.o lex.yy.o

scanMain.o:	scanMain.c token.tab.h
		gcc -c scanMain.c

token.tab.h:	token.y
		bison -d token.y

lex.yy.o:	token.l token.tab.h
		flex token.l
		gcc -c lex.yy.c 

parse:		parseMain.o token.tab.o  symtab.o lex.yy.o
		gcc -o parse parseMain.o token.tab.o symtab.o lex.yy.o

parseMain.o:	parseMain.c  token.tab.h 
		gcc -c parseMain.c

token.tab.o:	token.y  symtab.h
		bison token.y
		gcc -c token.tab.c

testsymtab:	symtabMain.o symtab.o
		gcc -o testsymtab symtabMain.o symtab.o

symtab.o:	symtab.c symtab.h
		gcc -c symtab.c

symtabMain.o: 	symtabMain.c symtab.h
		gcc -c symtabMain.c

gencode: 	gencodeMain.o gencode.o token.tab.o symtab.o lex.yy.o
	 	gcc -o gencode gencodeMain.o gencode.o token.tab.o symtab.o lex.yy.o

gencodeMain.o:	gencodeMain.c
		gcc -c gencodeMain.c

gencode.o:	gencode.c token.tab.h
		gcc -c gencode.c

# use del on Windows. use rm on Linux/Cygwin/Mac
clean:		
		rm *.o 
