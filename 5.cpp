#include<stdio.h>
int main()
{
	int b=1;
	int n;
	printf("请输入对折数:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		b=b*2;
	}
	printf("会得到%d根面条",b+1);
}