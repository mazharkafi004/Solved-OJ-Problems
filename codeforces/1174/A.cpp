#include<bits/stdc++.h>

using namespace std;


int main() {

long long n,a=0,b=0,e=0,y=0;
cin>>n;
long long p[(n*2)+1];
cin>>p[1];
 long long x=p[1];
 y=1;
for(long long i=2;i<=n*2;i++) {

    cin>>p[i];


    if(x==p[i]) {
        y++;
    }

}

if(y==n*2) {
    cout<<-1<<endl;
}
else {
    sort(p+1,p+(n*2)+1);
     for(long long i=1;i<=n*2;i++) {
            cout<<p[i]<<" ";
        }
        cout<<endl;
}




}
