#include<bits/stdc++.h>

using namespace std;

int main() {
    int p[1000];
int n=4,a,b,c,d,e=0,f=0,g=0;

for(int i=0;i<n;i++) {
    cin>>p[i];
}
    sort(p, p+n);

    for (int i = 0; i < n; ++i)

e=p[3]-p[2];
f=p[3]-p[1];
g=p[3]-p[0];
cout<<e<<" "<<f<<" "<<g<<endl;

}