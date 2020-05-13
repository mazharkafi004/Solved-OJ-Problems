#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long a1,b1,a2,b2;
 cin>>a1>>b1>>a2>>b2;
if(b1>a1) {
    swap(a1,b1);
}
if(b2>a2) {
    swap(a2,b2);
}
if(a1==a2) {
   if(b1+b2==a1) {
    cout<<"YES"<<endl;
   }
   else {
    cout<<"NO"<<endl;
   }
}
else {
    cout<<"NO"<<endl;
}
}

}
