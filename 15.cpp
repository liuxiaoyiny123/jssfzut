#include<stdio.h>  
int fun(int c){  
    int k=0;  
    while(c){  
        k=10*k+c%10;  
        c/=10;  
    }  
    return k;  
}  
int main(){  
    int a,b;  
    scanf("%d%d",&a,&b);  
    printf("%d",fun(fun(a)+fun(b)));  
    return 0;  
} 
