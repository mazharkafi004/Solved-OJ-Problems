#include<bits/stdc++.h>

using namespace std;

int main() {

 long long t;
 cin>>t;
 while(t--) {
    long long a,b,c=0,d,e,sum=0,result=0,x,y,n;
    cin>>x>>y>>n;
    a=n%x;
    b=n/x;
    if(a==y) {
        cout<<n<<endl;
    }
    else {
        c=(b-1)*x+y;
        //cout<<c<<endl;
        if(c<n) {
            c=c+x;
            if(c>n) {
                c=c-x;
            }
          //  cout<<c<<endl;
            if(c%x!=y) {

              c=c-x;
            }

        }
        if(c<0) {
            c=0;
        }
        cout<<c<<endl;
    }
//    long long p[n];
//    for(long long i=0;i<n;i++) {
//        cin>>p[i];
//    }

 }


}
