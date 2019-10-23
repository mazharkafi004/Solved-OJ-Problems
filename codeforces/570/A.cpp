#include <bits/stdc++.h>

using namespace std;

//map<int,int>p;


int main() {
int p[101];
memset(p,0,sizeof(p));
int n,m,a,b,c=1,i,j,e;
cin>>n>>m;
for(i=1;i<=m;i++) {
b=-1;
  for(j=1;j<=n;j++) {

    cin>>a;
    if (b<a) {
    b=a;
    c=j;
            }

        }

p[c]++;


        }
        b=-1;
        for(i=1;i<=n;i++) {
            if(b<p[i]) {
                b=p[i];
                e=i;
            }
        }
cout<<e<<endl;


    }
