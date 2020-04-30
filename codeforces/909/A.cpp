#include<bits/stdc++.h>
using namespace std;

int main() {
 string a,b,c;
 cin>>a>>b;
 c+=a[0];
 for(int i=1;i<a.size();i++) {
    if(a[i]>=b[0]) {
        break;
    }
    c+=a[i];
 }
 c+=b[0];
 cout<<c<<endl;


}
