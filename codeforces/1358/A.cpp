#include<bits/stdc++.h>

using namespace std;


int main() {
long long t;
cin>>t;
while(t--) {
    long long n,m;
    cin>>n>>m;
   long long a=(n*m);
   if(a%2!=0) {
    cout<<(a/2)+1<<endl;
   }
   else {
    cout<<a/2<<endl;
   }
}

}
