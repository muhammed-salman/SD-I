#include<stdio.h>
void dectobinary(int n)
{
	if (n > 0) {
        dectobinary(n/2);
        printf("%d",wifn%2);
    }
}
 
int main(){
	int x=5;
	dectobinary(x);
}

