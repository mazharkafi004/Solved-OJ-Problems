#include<bits/stdc++.h>

using namespace std;
int main() {
	int n;
	cin>>n;
	if (n>=0)
	{cout << n;
		return 0;
	}
	if((n%10)> ((n%100)/10))
	{
		cout <<((n/100)*10)+n%10;
		return 0;
	}
	else
	cout<<((n/100)*10)+n%100/10;

}