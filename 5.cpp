#include<stdio.h>
int main()
{
	int b=1;
	int n;
	printf("�����������:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		b=b*2;
	}
	printf("��õ�%d������",b+1);
}