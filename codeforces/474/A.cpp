#include <bits/stdc++.h>
using namespace std;


	int main(){
	    int i,j;
    char a[]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
	char b;
	char d[1000];
	char c[1000];
	cin>>b>>c;
	if(b=='l'||b=='L')
{
    for(i=0;i<strlen(c);i++)
    {
    for(j=0;j<30;j++)
    {
        if(c[i]==a[j])
        {
            d[i]=a[j+1];

        }
    }
	} }
	else
	{
    for(i=0;i<strlen(c);i++)
    {
    for(j=0;j<30;j++)
    {
        if(c[i]==a[j])
        {
            d[i]=a[j-1];

        }
    }
	} }
	d[strlen(c)]='\0';
	cout<<d<<endl; }