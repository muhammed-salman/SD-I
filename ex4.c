/*
 * Description: Program to demonstrate returning a pointer from a function;
 * Author: Muhammed Salman Shamsi
 */
#include<stdio.h>
#include<stdlib.h>

int * sum(int a, int b){
	int *ans=malloc(sizeof(int));//allocating memory dynamically
	*ans=a+b;
	printf("\nIn Sum Adress=%x Data=%d",ans,*ans);
	return ans; //returning the pointer
	
}
int main(){
	int *ans;
	ans=sum(10,2);
	printf("\nAdress=%x Data=%d",ans,*ans);	

}

