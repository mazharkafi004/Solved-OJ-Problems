#include<bits/stdc++.h>

using namespace std;
int main () {
int a[100],b=0,c=0,i,n;
cin>>n;

    for(i=0;i<n;i++) {
    cin>>a[i];

}
 for(i=0;i<n;i++) {
    if(a[i]==1) {
      b++;
    }
    else  {

        c++;
    }

}
if(b!=0) {
    cout<<"Hard"<<endl;
}
else cout<<"Easy"<<endl;

}