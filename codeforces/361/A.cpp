#include<bits/stdc++.h>


using namespace std;


int main() {
long long a,n,b,t,i,j;

cin>>n>>a;

b=(a-(n-1));
for(int i=0;i<n;i++) {
    for(int j=0;j<i;j++) {
        cout<<1<<" ";
    }
    cout<<b<<" ";
     for(int j=0;j<n-(i+1);j++) {
        cout<<1<<" ";
    }
    cout<<endl;

}

}
