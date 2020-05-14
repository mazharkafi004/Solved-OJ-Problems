#include<bits/stdc++.h>

using namespace std;

int bin2d(long long n)
{
    long long r=n,d=0,b=1,t=r,l=0;
    while(t) {
        l=t%10;
        t=t/10;
        d+=l*b;
        b=b*2;
    }
    return d;
}

int main() {
long long i,a=0,b=0,c=0,m,j;
string s;
cin>>s;
m=s.size();
for(i=0;i<m;i++)
{
     if((s[i]-'0')>1) {
            a++;
        for(j=i;j<m;j++) {
            s[j]='1';
        }
    }
    if(a!=0) {
        break;
    }

}
stringstream geek(s);
long long w=0;
geek>>w;
//cout<<(w)<<endl;
cout<<bin2d(w)<<endl;
//cout<<w+2<<endl;
}
