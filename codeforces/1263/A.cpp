#include<bits/stdc++.h>

using namespace std;


int main () {

long long t;
cin>>t;
while(t--) {
    long long r,g,b;
    cin>>r>>g>>b;
    long long mx=0,md=0,mn=0,a=0,c=0,x=0,y=0,z=0,p=0,q=1,l=0;
    mx=max(max(r,g),b);
long long     s=r+g+b;

//long long s=mn+md+mx;
cout<<min((s-mx),s/2)<<endl;


}

}
