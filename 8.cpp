/*当n=1的时候，A一定会输；
当n=1+[1,3,7,8]的时候，A一定会赢，因为A可以取1,3,7,8对应的那个数，然后把1留给B；
也就是说，当n的值是一个必输的情况加1,3,7,8的时候，则A可以取到对应的值，而把必输情况交给B。
我们根据这条规律，把n的所有取值1~10000都进行标记为1（必胜）或者0（必输），然后对输出对应的标记即可。
#include<iostream>*/
using namespace std;  
void fun(int *a)  
{  
    int b[]={1,3,7,8};  
    for(int i=1;i+8<10000;i++)  
    {  
        if(a[i]==0)     //必败局势   
        {  
            for(int j=0;j<4;j++)a[i+b[j]]=1;  
        }  
    }     
}  
int main()  
{  
    int a[10001]={0};  
    fun(a);  
    int n,m;  
    cin>>n;  
    for(int i=0;i<n;i++)  
    {  
        cin>>m;  
        cout<<a[m]<<endl;  
    }  
    return 0;  
}  
