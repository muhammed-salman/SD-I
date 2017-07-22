#include<stdio.h>
#include<stdlib.h>

int * sum(int a, int b){
	int *ans=malloc(sizeof(int));
	*ans=a+b;
	//printf("%d",*ans);
	//free(ans);
	printf("\nIn Sum Adress=%x Data=%d",ans,*ans);
	return ans;
	
}
void increment(char *a)
{
	int i;
	for(i=0;i<5;i++)
		*(a+i)=*(a+i)+1;
}
int main(){
	int *ans;
	ans=sum(10,2);
	printf("\nAdress=%x Data=%d",ans,*ans);
	

}

