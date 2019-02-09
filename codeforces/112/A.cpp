#include<stdio.h>
#include<string.h>
int main(){
    char t[1000],s[1000];
    scanf("%s%s",s,t);
    printf("%d\n",strcasecmp(s,t));
}
