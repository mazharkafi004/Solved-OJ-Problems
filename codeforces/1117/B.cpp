#include<bits/stdc++.h>

using namespace std;


int main()
 {
     long long n,m,k;
     cin>>n>>m>>k;
     long long p[n];
     for(long long i=0;i<n;i++) {
        cin>>p[i];
     }
     sort(p,p+n);
     long long a=0,b=0,c=0,d=0,e=0,f=0;
//     for(long long i=n-1;i>=0;i--) {
//       if(p[i]!=p[n-1]) {
//        a=p[i];
//        break;
//       }
//     }
f=p[n-2];
     b=(k*p[n-1])+f;
     c=m/(k+1);
     d=m%(k+1);
     e=(b*c)+(d*p[n-1]);
     cout<<e<<endl;

 }
