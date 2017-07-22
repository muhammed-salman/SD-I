//Pointers Arithmetic
#include<stdio.h>
#include<stdlib.h>

int main(){
	int *ptr;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	
	ptr = a;
	printf("\nIn the Begining ptr=%x , *ptr=%d",ptr,*ptr);
	ptr++;    // Pointer moves to the next int position (as if it was an array)
	printf("\nAfter ptr++; ptr=%x , *ptr=%d",ptr,*ptr);
	
	++ptr;    // Pointer moves to the next int position (as if it was an array)
	printf("\nAfter ++ptr; ptr=%x , *ptr=%d",ptr,*ptr);
	
	++*ptr;   // The value of ptr is incremented
	printf("\nAfter ++*ptr; ptr=%x , *ptr=%d",ptr,*ptr);
	
	++(*ptr); // The value of ptr is incremented
	printf("\nAfter ++(*ptr); ptr=%x , *ptr=%d",ptr,*ptr);
	
	++*(ptr); // The value of ptr is incremented
	printf("\nAfter ++*(ptr); ptr=%x , *ptr=%d",ptr,*ptr);
	
	*ptr++;   // Pointer moves to the next int position (as if it was an array). But returns the old content
	printf("\nAfter *ptr++; ptr=%x , *ptr=%d",ptr,*ptr);
	
	(*ptr)++; // The value of ptr is incremented
	printf("\nAfter (*ptr)++; ptr=%x , *ptr=%d",ptr,*ptr);
	
	*(ptr)++; // Pointer moves to the next int position (as if it was an array). But returns the old content
	printf("\nAfter *(ptr)++; ptr=%x , *ptr=%d",ptr,*ptr);
	
	*++ptr;   // Pointer moves to the next int position, and then get's accessed, with your code, segfault
	printf("\nAfter *++ptr; ptr=%x , *ptr=%d",ptr,*ptr);
	
	*(++ptr); // Pointer moves to the next int position, and then get's accessed, with your code, segfault
	printf("\nAfter *(++ptr); ptr=%x , *ptr=%d",ptr,*ptr);
	
	ptr++; // Pointer moves to the next int position, and then get's accessed, with your code, segfault
	printf("\nAfter *(++ptr); ptr=%x , *ptr=%d",ptr,*ptr);
}


