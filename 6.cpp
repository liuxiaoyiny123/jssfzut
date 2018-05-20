#include<stdio.h>
void showhex(int n)
{
	if(n>15)
	{
		showhex(n/16);
		printf(" ");
	}
	printf("%d",n%16);
}
int main()
{
	int a;
	printf("intput a num:");
	scanf("%d",&a);
	showhex(a);
	printf("\n");
}

