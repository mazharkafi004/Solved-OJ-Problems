#include<bits/stdc++.h>

using namespace std;

int main() {
int i,j,a,b=0;
for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cin>>a;
			if(a==1)
			{
				b =abs(3-i)+abs(3-j);
			}
		}
	}
	cout<<b<<endl;
}