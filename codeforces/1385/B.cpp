
#include <bits/stdc++.h>
using namespace std;


int main()
{

int t;
cin>>t;
while(t--) {
    	int n,m;
    	cin>>n;
    	n=n*2;
	 vector<int> v,p;
	for(int i=0;i<n;i++) {
            cin>>m;
        v.push_back(m);
	}
	for(int i=0;i<n;i++) {
        vector<int>::iterator it;
        it = find(p.begin(), p.end(), v[i]);
        	if (it != p.end())
	{
int a=0;
	}
	else {
		p.push_back(v[i]);
	}
	}
	 vector<int>::iterator it;
	 for(it=p.begin();it!=p.end();it++) {
           cout<<*it<<" ";
	}
	cout<<endl;
}


}
