#include<stdio.h>
#include<string.h>

int lengthString(char* ptr){
int counter=0;
while(*ptr != '\0'){
	counter++;
	ptr++;
}
return counter;
}

void strconcat(char* str,char*str2){
	while(*str !='\0'){
		str++;
	}
	while(*str2 != '\0'){
		*str = *str2;
		str++;
		str2++;
	}
	*str='\0';
}

void strcopy(char* str,char* str3){
while(*str != '\0'){
	*str3=*str;
	str3++;
	str++;
}
}

void main(){
	char str[100]={"hari will crack"};
	char str2[20]={"qualcomm"};
	char str3[10];
	char *str_ptr =str;
	char *str_ptr2=str2;
	char *str_ptr3=str3;
	int count=lengthString(str_ptr);
	printf("the length of str is %d \n",count);
//	printf("concate 1 : %s \n",strcat(str,str2));
	strconcat(str_ptr,str_ptr2);
	printf("%s \n",str_ptr);
	strcopy(str,str3);
	printf("pointer copy-> %s \n",str3);
}
	
