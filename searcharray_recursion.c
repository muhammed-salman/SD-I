#include<stdio.h>
int search_array(int x,int a[],int n){
	if(n==1)
		return 0;
	else	
		return x==a[n-1]?1:search_array(x,a,n-1); 
} 
int main(){
	int x=11,a[10]={1,2,3,4,5,6,7,8,9,10};
	if(search_array(x,a,10))
		printf("\nElement is Found");
	else	
		printf("\nElement is not Found");
}
