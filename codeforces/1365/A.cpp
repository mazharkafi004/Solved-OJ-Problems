#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
        long long z=0;
    long long n,m;
    cin>>n>>m;
    long long p[n][m];
    for(long long i=0;i<n;i++) {
       for(long long j=0;j<m;j++) {
        cin>>p[i][j];
       }
    }

    long long a,b=0,c=0,d=0,x=0,y=0,k=0;
    while(true) {
        a=0;
          for(long long i=0;i<n;i++) {
       for(long long j=0;j<m;j++) {
      if(p[i][j]==0) {
        x=0;
        for(k=0;k<m;k++) {
              if(p[i][k]==1) {
                  x++;
              break;
              }
        }
        if(x==0) {
               for(k=0;k<n;k++) {
              if(p[k][j]==1) {
                  x++;
              break;
              }
        }

      }
      if(x==0) {
        p[i][j]=1;
        a++;
        z++;

      }
       }
    }


    }
    if(a==0) {
        break;}
    }
    if(z%2!=0) {
        cout<<"Ashish"<<endl;
    }
    else {
        cout<<"Vivek"<<endl;
    }
}

}
