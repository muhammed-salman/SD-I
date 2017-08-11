#include<stdio.h>
void dectobin(int n){
	if(n==0)
		return;
	else
	{	
		dectobin(n/2);	
		printf("%d",n%2);
	}
}
int main(){
	dectobin(9);
	return 0;
}
