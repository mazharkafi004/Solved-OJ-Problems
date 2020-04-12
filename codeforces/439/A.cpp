#include<bits/stdc++.h>

using namespace std;

int main() {

 long long t,n,a,b,sum=0;
 cin>>t>>a;
 long long p[t];
 for(int i=0;i<t;i++) {
    cin>>p[i];
    sum+=p[i];
 }
 b=(10*(t-1))+sum;


 if(b>a) {
    cout<<-1<<endl;
 }
 else {
    cout<<(a-sum)/5<<endl;
 }

}
