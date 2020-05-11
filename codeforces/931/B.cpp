#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,a,b,c=0;
cin>>n>>a>>b;
a=a-1;
b=b-1;
while(a!=b) {
    a=a/2;
    b=b/2;
    c++;
}
long long d=pow(2,c);
if(d==n) {
    cout<<"Final!"<<endl;
}
else {
    cout<<c<<endl;
}
}
