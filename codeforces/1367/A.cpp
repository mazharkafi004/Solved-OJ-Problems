#include<bits/stdc++.h>


using namespace std;

int main() {

long long t;
cin>>t;
while(t--) {
    string s;
    cin>>s;
   // vector
    long long n=s.size();
   if(n==2) {
    cout<<s<<endl;
   }
   else {
     for(long long i=1;i<n-1;i++) {
        if(s[i]==s[i+1]) {
            s.erase(i+1,1);
            n=n-1;
        }
    }
    cout<<s<<endl;
   }
}


}
