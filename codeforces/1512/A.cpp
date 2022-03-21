#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,a,b,i;
        cin>>n;
        int p[n];
        
        for(i=0;i<n;i++) {
            cin>>p[i];
        }
        for(i=0;i<n-2;i++) {
            if(p[i] != p[i+1]) {
                 if(p[i] == p[i+2]) {
                     cout<<i+2<<endl;
                     break;
                 }
                 else {
                     cout<<i+1<<endl;
                     break;
                 }
            }
            else {
                if(p[i+1] != p[i+2]) {
                     cout<<i+3<<endl;
                     break;
                 }
                 
            }
        }
       
    }
}