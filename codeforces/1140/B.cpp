#include <bits/stdc++.h>
using namespace std;
int main(){
    int p,n,i,j,a;
    string s;
	cin>>p;
	for(i= 0;i<p;i++){
	cin>>n>>s;
	a=n-1;
	for(j=0;j<n;j++) {
	if(s[j]=='>'||s[n-1-j]=='<')
	a=min(a,j);}

	cout<< a<<endl;
	}


}
