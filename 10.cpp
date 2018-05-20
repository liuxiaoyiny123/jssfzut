#include<stdio.h>
#include<string.h>
int main()
{
	char a[20]£»
	int L=strlen(a);
int i;
	scanf("%s",a);
	for(i=0;i<L;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		a[i]=(a[i]-32);
		else
		a[i]=(a[i]+32);
	}
	printf("%s",a);
return 0;
}
