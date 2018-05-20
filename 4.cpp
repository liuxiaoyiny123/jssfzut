#include <stdio.h>
int main()
{
	int i;
	for(i=100;i<1000;i++)
	{
        if((i*i-i)%1000==0)
		{
		    printf("%d\n",i);
		}
	}
}
