/* Functions to print JVM assembly instructions */
#include <stdio.h>
#include <stdlib.h>

extern globalFunction;

void genBegin() {/* boilerplate code */
	/* comment and header including default constructor */
  printf(".source Main.java\n");
  printf(".class  synchronized Main\n");
  printf(".super  java/lang/Object\n\n");
}

void genConstruct()
{
  printf("; >> CONSTRUCTOR <<\n");
  printf(".method <init>()V\n");
  printf(".limit stack 1\n");
  printf(".limit locals 1\n");
  printf("aload_0\n");
  printf("invokenonvirtual java/lang/Object/<init>()V\n");
}

void genMain()
{
  /* start of main */
  printf("; >>FUNCTION MAIN <<\n");
  printf(".method public static main([Ljava/lang/String;)V\n");
  printf(".throws java/io/IOException\n");
  printf(".limit stack 32\n"); /* exact limit requires analysis */
  printf(".limit locals 32\n"); /* exact limit would be the max JVM# */
} 

void genReadMethod() {/* boilerplate code for read method */
  printf("; >> READ METHOD <<\n");
  printf(".method private static myRead()I\n");
  printf(".throws java/io/IOException\n\n");
  printf(".limit stack 5\n");
  printf(".limit locals 2\n\n");
  printf("new java/io/BufferedReader\n");
  printf("dup\n");
  printf("new java/io/InputStreamReader\n");
  printf("dup\n");
  printf("getstatic java/lang/System/in Ljava/io/InputStream;\n");
  printf("invokenonvirtual java/io/InputStreamReader/<init>(Ljava/io/InputStream;)V\n");
  printf("invokenonvirtual java/io/BufferedReader/<init>(Ljava/io/Reader;)V\n");
  printf("astore_0\n");
  printf("aload_0\n");
  printf("invokevirtual java/io/BufferedReader/readLine()Ljava/lang/String;\n");
  printf("astore_1\n");
  printf("aload_1\n");
  printf("invokestatic java/lang/Integer/parseInt(Ljava/lang/String;)I\n");
  printf("ireturn\n");
  printf(".end method\n\n");
} 

void genAssign(int i) {
    printf("istore %d\n", i);
}

void genAssignArray(int i) {
	printf("astore %d\n",i);
}

void genStoreArray(){
	printf("iastore \n");
}

void genLoadIntoArray(){
	printf("iaload \n");
}

void genNewArray(){
	printf("newarray int\n");
}

void genRead(int i, char*name, int scope, int kind) {
  printf("invokestatic Main/myRead()I\n");
  if (scope == 0)
  {
	printf("putStatic Main/%s",name);
	if (strcmp(kind,"variable") == 0)
	{
		printf(" I\n");
	}
	if (strcmp(kind,"array") == 0)
	{
		printf(" [I\n");
	}
  }
  else
  {
	printf("istore %d\n", i);
  }
}

void genBeginPrint() {
  printf("getstatic java/lang/System/out Ljava/io/PrintStream;\n");
}

void genEndPrint() {
  printf("invokevirtual java/io/PrintStream/println(I)V\n");
}

void genLoadVar(int i) { /* i is the JVM # for the variable */
    printf("iload %d\n", i);
}

void genLoadArray(int i){
	printf("aload %d\n",i);
}

void genLoadConst(int i) {
    printf("ldc %d\n", i);
}

void genCodeAdd() {
    printf("iadd\n");
}

void genCodeSub() {
    printf("isub\n");
}

void genCodeMult(){
	printf("imul\n");
}

void genCodeDiv(){
	printf("idiv\n");
}

void genGlobalInt(char*name){
	printf(".field static %s I\n",name);
}

void genGlobalArray(char *name){
	printf(".field static %s [I\n",name);
}

void genGlobalLoadVar(char*name){
	printf("getstatic Main/%s I\n",name);
}

void genGlobalStoreVar (char*name){
	printf("putstatic Main/%s I\n",name);
}

void genGlobalLoadArray(char*name){
	printf("getstatic Main/%s [I\n",name);
}

void genGlobalStoreArray(char*name){
	printf("putstatic Main/%s [I\n",name);
}

/* A C function to generate new label names */

char * genLabel(void) {
  static int num = 0;
  char * lab = (char *)malloc(20*sizeof(char));
  num++;
  sprintf(lab, "Label%d", num);
  return lab;
}
void gotoPrint(char*label)
{
	printf("goto %s\n",label);
}

void trueTest()
{
	char* first;
	char* second;
	first = genLabel(); 
	printf("%s\n",first);
	genLoadConst(0);
	second = genLabel();
	gotoPrint(second);
	printf("%s:\n",first);
	genLoadConst(1);
	printf("%s:\n",second);
}

void lessThan()
{
	printf("if_icmplt ");
	trueTest();
}

void lessThanEqual()
{
	printf("if_icmple "); 
	trueTest(); 
}

void doubleEqual()
{
	printf("if_icmpeq "); 
	trueTest();
}

void notEqual()
{
	printf("if_icmpne "); 
	trueTest();
}

void greaterThan()
{
	printf("if_icmpgt "); 
	trueTest();
}

void greaterThanEqual()
{
	printf("if_icmpge "); 
	trueTest();
}

void functionCall(char*name, int type,int paramNum)
{
	if (type == 261)
	{
		int i;
		printf("invokestatic Main/%s(",name);
		for (i = 0; i < paramNum; i++)
		{
			printf("I");	
		}	
		printf(")V\n");
	}
	else if (type == 259)
	{	int i;
		printf("invokestatic Main/%s(",name);
		for (i = 0; i < paramNum; i++)
		{
			printf("I");
		}
		printf(")I\n");
	}
}

void genReturnInt()
{
	printf("ireturn\n");
}

void genFunction(char* name, int type, int paramNum) {
	if (strcmp(name,"main") !=0)
	{
		if (type == 261)
		{
			int i = 0;
			printf("; >> FUNCTION %s <<\n",name);
			printf(".method static %s(",name);
			for (i = 0; i < paramNum; i++)
			{
				printf("I");
			}		
			printf(")V\n");
			printf(".limit stack 32\n");
			printf(".limit locals 32\n");
			
		}
		else if (type == 259)
		{
			int i;
			printf("; >> FUNCTION %s <<\n",name);
			printf(".method static %s(",name);
			for (i = 0; i < paramNum; i++)
			{
				printf("I");
			}
			printf(")V\n");
			printf(".limit stack 32\n");
			printf(".limit locals 32\n");
		}
	}
}

void globalArrayClass()
{
	printf("; >> CLASS INIT FOR GLOBAL ARRAYS <<\n");
	printf(".method static <clinit>()V\n");
	printf(".limit stack 1\n");
	printf(".limit locals 0\n");	
}

void genEnd() {/* end main and print boilerplate code for myRead() */
  printf("return\n");
  printf(".end method\n\n");
}

