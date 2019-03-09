#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[100];
    int i,n,b=0,c=0,d=0,e=0;
    cin>>n;
    for(i=1;i<=n;i++) {
        cin>>a[i];
        if(a[i]%2==0) {
            b++;
d=i;
        }
        else {
            c++;
e=i;
        }

 }
 if(b>c) {
    cout<<e<<endl;
 }
 else {

     cout<<d<<endl;
 }
// for(i=1;i<=n;i++) {
//    if(b>c) {
//        if(a[i]%2!=0) {
//            d=i;
//        }
//    }
//    else {if(a[i]%2==0) {
//            d=i;
//
//    }
// }
//    }
//    cout<<d<<endl;
}
