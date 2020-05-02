#include<bits/stdc++.h>

using namespace std;

int main() {

    long long n,a=0;
    cin>>n;
if(n%2==0) {
    cout<<n*(n/2)<<endl;
}
else {
    cout<<(((n/2)+1)*(((n/2)+1)))+((n/2)*(n/2))<<endl;
}
      if(n%2==0) {
        for(long long j=1;j<=n;j++) {
           if(j%2==0){
            for(long long k=1;k<=n;k++) {
            if(k%2==0) {
                cout<<".";
            }
            else {
                cout<<"C";
                a++;
            }
        }
        cout<<endl;}
        else {
            for(long long k=1;k<=n;k++) {
            if(k%2==0) {
                cout<<"C";
                a++;
            }
            else {
                cout<<".";
            }
        }
        cout<<endl;
        }
      }}
      else {
          for(long long j=1;j<=n;j++) {
                if(j%2==0){
            for(long long k=1;k<=n;k++) {
            if(k%2==0) {
                cout<<"C";
                a++;
            }
            else {
                cout<<".";
            }
        }
        cout<<endl;}
        else {
            for(long long k=1;k<=n;k++) {
            if(k%2==0) {
                cout<<".";
            }
            else {
                cout<<"C";
                a++;
            }
        }
        cout<<endl;
        }
        }
      }

}
