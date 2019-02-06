#include<bits/stdc++.h>


using namespace std;
int main() {
	int a,b=0;
	cin>>a;

	while(a>0) {
		b+= a%2;
		a/=2;
	}
	cout<<b;
	return 0;

}