/*
 * Description: Referencing and Dereferencing in Pointers
 * Author: Muhammed Salman Shamsi
 * Created on: 11 July, 2017
 */
 #include<stdio.h>
 int main(){
	int a=5,*p,**pp,***ppp;
	p=&a;
	pp=&p;
	ppp=&pp;
	printf("\n----------------------------------");
	printf("\np points to address of a");
	printf("\npp points to address of p");
	printf("\nppp points to address of pp");
	printf("\n----------------------------------");
	printf("\nAddress of a (i.e. p): %x",p);
	printf("\nValue of a (i.e. *p): %d",*p);
	printf("\nAddress pointed by pp (i.e pp): %x",pp);
	printf("\nValue of *pp: %x",*pp);
	printf("\nValue at the address pointed by pp (i.e **pp): %d",**pp);
	printf("\nValue of ppp: %x",ppp);
	printf("\nValue of *ppp: %x",*ppp);
	printf("\nValue of **ppp: %x",**ppp);
	printf("\nValue of ***ppp: %x",***ppp);
	return 0;
 }
