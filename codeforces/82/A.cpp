#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,b,c;
cin>>n;

    for(long long i=1;;i*=2) {
        n=n-(5*i);

        if(n<0) {
            n=n+(5*i);
           b=n;
            c=i;
            break;
        }
    }
long long z=b%c,x=b/c;

if(z==0) {
    if(x==1) {
       cout<<"Sheldon"<<endl;
    }
    else if(x==2) {
       cout<<"Leonard"<<endl;
    }
    else if(x==3) {
       cout<<"Penny"<<endl;
    }
    else if(x==4) {
       cout<<"Rajesh"<<endl;
    }
    else if(x==0) {
       cout<<"Howard"<<endl;
    }
}
else {
    if(x==0) {
       cout<<"Sheldon"<<endl;
    }
    else if(x==1) {
       cout<<"Leonard"<<endl;
    }
    else if(x==2) {
       cout<<"Penny"<<endl;
    }
    else if(x==3) {
       cout<<"Rajesh"<<endl;
    }
    else if(x==4) {
       cout<<"Howard"<<endl;
    }
}
}
