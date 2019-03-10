#include<bits/stdc++.h>

using namespace std;

int main() {
int a[1000];
int i,b,c,n,d;
cin>>n;
for(i=0;i<n;i++) {
    cin>>a[i];
}
b=a[0]%2;
c=a[n-1]%2;
d=n%2;
if(b!=0 && c!=0 && d!=0){

    cout<<"Yes"<<endl;
}
else {
    cout<<"No"<<endl;
}

}
