/*
 * Description: Relation between 2D Array and Pointers
 * Author: Muhammed Salman Shamsi
 */
#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j;
	int a[3][3]={
		{7,5,6},
		{2,3,7},
		{5,4,2}
	};
	for(i=0;i<3;i++){
		printf("\n\nAddress of pointer pointed by a[%d] =%u ",i,(a+i));
		for(j=0;j<3;j++){
			printf("\nAddress of a[%d][%d] =%u \t Value at a[%d][%d] =%d",i,j,&a[i][j],i,j,a[i][j]);
			//The name of 2D array is pointer to pointer 
			//hence it requires double derefrencing ** to display element
			printf("\nAddress of a[%d][%d] =%u \t Value at a[%d][%d] =%d",i,j,(*(a+i)+j),i,j,*(*(a+i)+j));
		}
	}
}
/*
Output:

Address of pointer pointed by a[0] =1459845488 
Address of a[0][0] =1459845488 	 Value at a[0][0] =7
Address of a[0][0] =1459845488 	 Value at a[0][0] =7
Address of a[0][1] =1459845492 	 Value at a[0][1] =5
Address of a[0][1] =1459845492 	 Value at a[0][1] =5
Address of a[0][2] =1459845496 	 Value at a[0][2] =6
Address of a[0][2] =1459845496 	 Value at a[0][2] =6

Address of pointer pointed by a[1] =1459845500 
Address of a[1][0] =1459845500 	 Value at a[1][0] =2
Address of a[1][0] =1459845500 	 Value at a[1][0] =2
Address of a[1][1] =1459845504 	 Value at a[1][1] =3
Address of a[1][1] =1459845504 	 Value at a[1][1] =3
Address of a[1][2] =1459845508 	 Value at a[1][2] =7
Address of a[1][2] =1459845508 	 Value at a[1][2] =7

Address of pointer pointed by a[2] =1459845512 
Address of a[2][0] =1459845512 	 Value at a[2][0] =5
Address of a[2][0] =1459845512 	 Value at a[2][0] =5
Address of a[2][1] =1459845516 	 Value at a[2][1] =4
Address of a[2][1] =1459845516 	 Value at a[2][1] =4
Address of a[2][2] =1459845520 	 Value at a[2][2] =2
Address of a[2][2] =1459845520 	 Value at a[2][2] =2
*/

