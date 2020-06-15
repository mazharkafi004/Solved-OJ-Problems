#include<bits/stdc++.h>

using namespace std;
long long factorial(long long n);
long long ncr(long long n,long long r) {
return factorial(n)/(factorial(r)*factorial(n-r));
}
long long factorial(long long n) {
long long ans=1;
for(long long i=2;i<=n;i++) {
    ans=ans*i;
}
return ans;
}
int main() {

string s,t;
cin>>s;
cin>>t;
long long a=0,b=0,c=0,n=0,m=0,p=0,q=0,r=0,w=0;
for(long long i=0;i<s.size();i++) {
    if(s[i]=='+') {
        a++;
        p++;
    }
    else {
        a--;
        q++;
    }
}
for(long long i=0;i<s.size();i++) {
        if(t[i]=='+') {
        b++;
        r++;
    }
    else if(t[i]=='-') {
        b--;
        w++;
    }
    else {
        c++;
    }
}
if(c==0) {
    if(a==b) {
        cout<<1<<endl;
    }
    else {
        cout<<0<<endl;
    }
}
else {
        double ans=0;
        m=p-r;
    n=q-w;
   if(m==0 || n==0) {
    ans=1.0/(pow(2,c));
printf("%.12lf",ans);
   }
   else {
    m=p-r;
    n=q-w;
   double  x=ncr(c,m);
    // printf("%.12lf",x);

     ans=x/(pow(2,c));
     printf("%.12lf",ans);
   }
}
}
