#include <bits/stdc++.h>
using namespace std;


	int main(){
	    int a;
	int n,m,k;
	cin>>n>>m>>k;
	int i,b=n,c=0,d=0,e=0;
	m--;
	for(i=0;i<n;i++) {
        cin>>a;
 if(a!=0&&a<=k) {
    b=min(b,abs(i-m));
 }}
 cout<<10*b<<endl;
	}
