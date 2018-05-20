#include<stdio.h>
int sum;
void move(char A,char B)
{
	sum++;
	printf("%c->%c\n",A,B);
}
void hanoi(char A,char B,char C,int n)
{
	if(n==1)
		move(A,C);
	else
	{
		hanoi(A,C,B,n-1);
		move(A,B);
		hanoi(B,A,C,n-1);
	}
}
void main()
{
	int n;
	scanf("%d",&n);
	sum=0;
	hanoi('A','B','C',n);
	printf("%d\n",sum);
}
