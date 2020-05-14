#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,m,a=0,b=0,c=0;
cin>>n>>m;
if(n>m) {
    swap(n,m);
}
while(1) {
       // cout<<n<<" "<<m<<endl;
    if(n<=m) {
        n=n-1;
        m=m-2;
        a++;
         if(n<0 || m<0) {
                         a=a-1;
            break;
        }
    }
     else if(m<n) {
        m=m-1;
        n=n-2;
        a++;
        if(n<0 || m<0) {
            a=a-1;
            break;
        }
    }
     if(n<0 || m<0) {
                     a=a-1;
            break;
        }
}
cout<<a<<endl;
}
