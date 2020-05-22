#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,a,b,x,y;
cin>>n>>a>>x>>b>>y;
if(a==b) {
    cout<<"YES"<<endl;
    return 0;
}
while(1) {
      //  cout<<a<<" "<<b<<endl;
         if(a==b) {
        cout<<"YES"<<endl;
        return 0;
       }
        if(a!=b && (a==x ||b==y)) {
       cout<<"NO"<<endl;
       return 0;}
//cout<<b<<endl;
    a++;
    b--;
    if(a==n+1) {
        a=1;
    }
    if(b==0) {
        b=n;
    }


}

}
