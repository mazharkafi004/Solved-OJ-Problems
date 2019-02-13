#include<bits/stdc++.h>

using namespace std;


int main() {
long long int a,b;
	cin >> a;
	if(a%2==0){
		a = a/2;
		b = a*(a+1) - (a*a);
	}

	else if(a%2==1){
		a = a/2;
		b = a*(a+1) - (a+1)*(a+1);
	}

	cout << b << endl;
	return 0;

}