#include<stdio.h>

typedef struct{
	int add;
	int sub;
	float mul;
}op;

op addFun(int a,int b){
	op res;
	res.add=a+b;
	return res;
}

void main(){
	op testV;
	int a=10,b=20;
	op* ptr=&testV;
	op res=addFun(a,b);
	printf("%d \n",res.add);
}


