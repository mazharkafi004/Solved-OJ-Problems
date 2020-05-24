#include<bits/stdc++.h>


using namespace std;


int main()  {
long long t;
cin>>t;
while(t--) {
    long long a,b;
    cin>>a>>b;
    long long m=max(a,b);
    long long n=min(a,b);
    if(2*n<=m) {
        cout<<m*m<<endl;
    }
    else {
        cout<<(2*n)*(2*n)<<endl;
    }


}

}
