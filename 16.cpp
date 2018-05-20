#include<stdio.h>
#include<string.h>
int main(){
char s[20],ch;
gets(s)
scanf("%c",&ch);
int i;
for(i=0;i<strlen(s);i++){
if(s[i]!=ch){
printf("%c",s[i]);
}
}
return 0;
}
