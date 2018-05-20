#include<stdio.h>
int main()
{
	int m,n,i,j,a[10][10]={0};
	scanf("%d%d",&m,&n);
		printf("input:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	printf("%d",a[j][i]);}
		printf("\n");
	}
	return 0;
}
