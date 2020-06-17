#include<bits/stdc++.h>


using namespace std;


int main() {

 long long n;
 cin>>n;
 long long p[n];
 for(long long i=0;i<n;i++) {
    cin>>p[i];
 }
 if(n==1) {
   if(p[0]==0) {
    cout<<"UP"<<endl;
   }
   else if(p[0]==15){
    cout<<"DOWN"<<endl;
   }
   else {
    cout<<-1<<endl;
   }
 }
 else {
    if(p[n-1]>p[n-2]) {
        if(p[n-1]==15) {
            cout<<"DOWN"<<endl;
        }
        else {
              cout<<"UP"<<endl;
        }
    }
    else {
            if(p[n-1]!=0) {
            cout<<"DOWN"<<endl;
        }
        else {
              cout<<"UP"<<endl;
        }
    }
 }


}
