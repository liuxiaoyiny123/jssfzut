#include<stdio.h>
int main()
{
	int N,i,count=0;
	int a[1000];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);

		if(a[i]%2==0)
			count++;
	}

	printf("%d %d\n",(N-count),count);
	return 0;
}
