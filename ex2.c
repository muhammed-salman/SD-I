/*
 * Description: Returning Multiple Values by means of pointers
 * Author: Muhammed Salman Shamsi
 * Created on: 11 July, 2017
 */
 #include<stdio.h>
 /*description: does addition and multiplication of two numbers
  * @prams: a - number1, b - number2, *s : will store sum of a & b, 
  * *p: will store product of a & b */
   
 void arithmetic(int a,int b,int *s,int *p){
	 *s=a+b;   //actually returning sum by means of pointers
	 *p=a*b;   //actually returning product by means of pointers
	 return;   //returns nothing or void
 }	
 
 int main(){
	int sum=0,product=0,a,b;
	printf("\nEnter two numbers: ");
	scanf("%d%d",&a,&b);
	arithmetic(a,b,&sum,&product); //call by reference
	printf("\nSum=%d, Product=%d",s,product);
	return 0;
 }
