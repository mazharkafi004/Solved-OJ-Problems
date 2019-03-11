#include <bits/stdc++.h>
using namespace std;

int main (){
    int p[10000];
	int q[10000];
	int a,b,n,i,j;
	cin>>n;

	for(i=0;i<n;i++) {
        cin>>p[i]>>q[i];
	}
	for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
           if( p[i]+q[i]==p[j] && p[j]+q[j]==p[i] ) {
            cout<<"YES"<<endl;
            return 0;
           }

           }
        }
        cout<<"NO"<<endl;
	}

