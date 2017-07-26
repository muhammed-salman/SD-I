/*
 * Description: Program to demonstrate relation between pointers and arrays;
 * pointer and string; 
 * swapping two numbers without using third variable;
 * printing size of different data types
 * Author: Muhammed Salman Shamsi
 */

#include<stdio.h>
#include<stdlib.h>
//swapping two numbers without using third variable

void swap(int *a, int *b){
	printf("\n\nSwapping num1 and num2 without using third variable");
	*a=*a+*b; //a=a+b
	*b=*a-*b; //b=(a+b)-b=a
	*a=*a-*b; //a=(a+b)-a=b
}

void increment(int *a)
{
	int i;
	for(i=0;i<5;i++)
		*(a+i)=*(a+i)+1;
}

void incrementChar(char *a)
{
	int i;
	for(i=0;i<5;i++)
		*(a+i)=*(a+i)+1;
}

int main(){
	int a[5]={1,2,3,4,5},i=5,*p;
	int num1=8,num2=9;
	char myString[15];
	
	printf("\nBefore Calling swap() num1=%d and num2=%d",num1,num2);
	swap(&num1,&num2);
	printf("\n\nAfter Calling swap() num1=%d and num2=%d",num1,num2);
	printf("\n\nBefore Calling increment()");
	for(i=0;i<5;i++)
		printf("\n%d",a[i]);
	increment(a);
	printf("\nAfter Calling increment()");
	for(i=0;i<5;i++)
		printf("\n%d",a[i]);
	
	printf("\n\nPlease Enter a String");	
	scanf("%s",myString);	
	printf("\nBefore Calling incrementChar() String =%s",myString);
	incrementChar(myString);
	printf("\nAfter Calling incrementChar() String =%s",myString);
	
	printf("\n\nSize of different data types in C:");
	printf("\nint = %lu bytes",sizeof(int));
	printf("\nfloat = %lu bytes",sizeof(float));
	printf("\nchar= %lu bytes",sizeof(char));
	printf("\ndouble= %lu bytes",sizeof(double));

}
