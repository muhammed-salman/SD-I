#include <stdio.h> 

int gcd(int, int); 

int main(){ 
	int n1, n2, result;  
	printf("Enter the two numbers to find their GCD: "); 
	scanf("%d%d", &n1, &n2);
	result = gcd(n1, n2); 
	printf("The GCD of %d and %d is %d.\n", n1, n2, result);
} 
int gcd(int n1, int n2){ 
	while (n1 != n2) { 
		if (n1 > n2) { 
			return gcd(n1-n2, n2); 
		} 
		else { 
			return gcd(n1, n2 – n1); 
		} 
	} 
	return n1;
}
