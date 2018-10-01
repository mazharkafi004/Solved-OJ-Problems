#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++)
    {
    	cin>>p[i];
	}
	sort(p,p+n);
	for (int i=1;i<n-1;i++)
    {
        if (p[i-1]+p[i]>p[i+1])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}