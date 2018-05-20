//运用冒泡算法，把最大的数浮在最上面，而小的数就下沉，最后就输出
#include <stdio.h>
int main()
{
int t,a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
t=a，a=b，b=t;
}
if(a<c)
{
t=a，a=c，c=t;
}
if(b<c)
{
t=b， b=c， c=t;
}
printf("%d %d %d\n",a,b,c);
return 0;

