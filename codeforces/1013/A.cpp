#include<bits/stdc++.h>

using namespace std;

int main() {
int m,d=0,a,b=0,c=0,i,n;
int p[1000];

cin>>n;
for(i=1;i<=n;i++) {
    cin>>p[i];
    b+=p[i];
}
for(i=1;i<=n;i++) {
    cin>>p[i];
    c+=p[i];
}

if(b>=c) {
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}

}
