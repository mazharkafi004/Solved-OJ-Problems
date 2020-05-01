#include<bits/stdc++.h>


using namespace std;

int main() {
long long n,m;
long long a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,z=0,x=0;
cin>>n>>m;
while(n--) {

    string s;
x++;
    cin>>s;
    for(long long i=0;i<s.size();i++) {
        if(s[i]=='*') {
            if(z==0) {
                a=i+1;
                e=x;
            }
            if(z==1) {
                b=i+1;
                f=x;
            }
            if(z==2) {
                c=i+1;
                g=x;
            }
            z++;
        }
    }
}

long long p,q,r;
if(e==f) {
    p=g;
}
else if(e==g) {
    p=f;
}
else {
    p=e;
}
if(a==b) {
    q=c;
}
else if(a==c) {
    q=b;
}
else {
    q=a;
}
cout<<p<<" "<<q<<endl;

//cout<<e<<" "<<a<<endl;
//cout<<f<<" "<<b<<endl;
//cout<<g<<" "<<c<<endl;
}
