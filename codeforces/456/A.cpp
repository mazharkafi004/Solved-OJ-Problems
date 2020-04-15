#include<bits/stdc++.h>

using namespace std;

int main() {

 long long n,a=0;
 cin>>n;
 long long b,c;
 for(int i=0;i<n;i++) {
    cin>>b>>c;
    if(c>b) {
        a++;
    }

 }
 if(a!=0)    {  cout<<"Happy Alex"<<endl;
        return 0;

    }
    else {
 cout<<"Poor Alex"<<endl;
 return 0;
 }






}
