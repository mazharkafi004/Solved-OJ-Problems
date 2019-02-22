#include<bits/stdc++.h>

using namespace std;

int main() {
    int p[1000];
int n,a,b,c,d,e=0,f=0,g=0;
cin>>n;
for(int i=0;i<n;i++) {
    cin>>p[i];
}
    sort(p, p+n);

    for (int i = 0; i < n; ++i)
        cout << p[i] << " ";


}