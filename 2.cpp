#include<string.h>
#include<stdio.h>
int main()
{
	char str[100];
	int small,large,num,other;
	int i;
	small=large=num=other=0;
	for(i=0;i<strlen(str);i++)
		if(str[i]>='a'&&str[i]<='z')
			small++;
		else if(str[i]>='A'&&str[i]<='Z')
			large++;
		else if(str[i]>='0'&&str[i]<='9')
			num++;
		else
			other++;
		printf("small:%d,large:%d,num:%d,other:%d\n",small,large,num,other);
		return 0;
}

