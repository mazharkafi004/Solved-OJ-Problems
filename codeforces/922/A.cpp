#include<bits/stdc++.h>

using namespace std;


int main() {
long long x,y;
cin>>x>>y;
long long m=(y-1)*2;
long long a=0,b=0,c=0,d=0;
a=x-(y-1);
if(y==1) {
    a=x-1;
}
//cout<<a<<endl;
long long n=x-m;
if(y==1 && x==0) {
    cout<<"YES"<<endl;
    return 0;
}
if(y==1 && x==1) {
    cout<<"NO"<<endl;
    return 0;
}
if(y==1 && x==2) {
    cout<<"NO"<<endl;
    return 0;
}
if(y==0 && x!=0) {
    cout<<"NO"<<endl;
    return 0;
}
if(a<0) {
    cout<<"NO"<<endl;
}
else if(a%2==0) {
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}

}
