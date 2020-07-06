#include<bits/stdc++.h>

using  namespace std;

int main()  {

long long n;
cin>>n;
long long a=0,b=0,c=0,d,e;
for(long long i=0;i<n;i++) {
    cin>>d;
    if(d%2==0) {
        a++;
    }
    else {
        b++;
    }
}
if(b%2==0) {
    cout<<a<<endl;
}
else {
    cout<<b<<endl;
}
}
