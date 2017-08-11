#include <stdio.h>
void moveTowers(int, char, char, char);
int main()
{
    int n;
    printf("Enter the number of disks : ");
    scanf("%d",&n);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    moveTowers(n,'A','C','B');
    return 0;

}
void moveTowers(int n,char from,char to,char using)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", from, to);
        return;
	}
    moveTowers(n-1,from,using,to);
    printf("\n Move disk %d from peg %c to peg %c",n,from,to);
    moveTowers(n-1, using, to, from);
}
