#include <stdio.h>
typedef struct{
	int a;
	int b;
}variableName_int8;

void swap(int* a,int* b,variableName_int8* storeVar){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	storeVar->a=*a;
	storeVar->b=*b;
}

int main(){
	int a=10,b=12;
	variableName_int8 storeVar;
	swap(&a,&b,&storeVar);
	printf("%d, %d \n",storeVar.a,storeVar.b);
}
