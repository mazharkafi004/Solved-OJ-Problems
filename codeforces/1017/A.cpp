#include<bits/stdc++.h>
using namespace std;

int main() {
int a,b,c,d,e=0,f,i,n,p=1;

cin>>n;
 cin>>a>>b>>c>>d;
  e=a+b+c+d;
for(i=1;i<n;i++) {
    cin>>a>>b>>c>>d;
    if((a+b+c+d)>e) {
        p++;
    }
}
cout<<p<<endl;

}
