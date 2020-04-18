#include<bits/stdc++.h>


using namespace std;


int main() {
long long a,n,b,t,i,j;

cin>>n;

b=(a-(n-1));
for(int i=1;i<=(n/2)+1;i++) {
    for(int j=0;j<=((n-((2*i)+1))/2);j++) {
        cout<<"*";
    }
    for(int j=0;j<(2*i)-1;j++) {
        cout<<"D";
    }
    for(int j=0;j<=((n-((2*i)+1))/2);j++) {
        cout<<"*";
    }
    cout<<endl;

}

for(int i=(n/2);i>0;i--) {
    for(int j=0;j<=((n-((2*i)+1))/2);j++) {
        cout<<"*";
    }
    for(int j=0;j<(2*i)-1;j++) {
        cout<<"D";
    }
    for(int j=0;j<=((n-((2*i)+1))/2);j++) {
        cout<<"*";
    }
    cout<<endl;

}

}

