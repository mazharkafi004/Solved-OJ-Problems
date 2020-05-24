#include<bits/stdc++.h>

using namespace std;

int main()   {
long long n;
cin>>n;
long long a=0,b=0,x=0,y=0,c=0;
deque<long long> p;
long long z=0;
for(long long i=0;i<n;i++) {
cin>>c;
if(c>0) {
        x++;
 a+=c-1;
}
if(c<0) {
    y++;
    a+=abs(c)-1;
}
if(c==0) {
    z++;
}
}
//cout<<a<<endl;
//cout<<x<<" "<<y<<" "<<z<<endl;
long long q=y%2;
if(q!=0 && z==0) {
    cout<<a+2<<endl;
}

else {
    cout<<a+z<<endl;
}

}
