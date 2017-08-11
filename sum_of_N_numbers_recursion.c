#include <stdio.h> 
int sum(int num) { 
	if (num==0) 
		return num; 
	else 
		 return num + sum(num-1);
 }
int main() { 
	int number, result; 
	printf("Enter a positive integer: "); 
	scanf("%d", &number); 
	result = sum(number); 
	printf("sum=%d", result); 
} 
