#include<bits/stdc++.h>
#include<string>

using namespace std;

int main() {
int a,b=0,n,i,c=0,q=0,d;
int p[200001];
cin>>n;
for(i=1;i<=n;i++) {
    cin>>p[i];
    b+=p[i];
}
if(b%2==0) {
    d=b/2;
}
else {
    d=(b/2)+1;
}
for(i=1;i<=n;i++) {
    c+=p[i];
    if(c>=d) {
        q=i;
       break;
    }
}
cout<<q<<endl;
}


