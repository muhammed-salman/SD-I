#include<stdio.h>
int multiply(int a,int b){ //assume a,b >=0
	if(a==0 || b==0)
		return 0;
	else
		return a+multiply(a,b-1);
}
int main(){
	printf("Product of 2 and 5 is %d",multiply(2,5));
	return 0;
}
