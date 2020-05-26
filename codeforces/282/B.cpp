#include<bits/stdc++.h>

using namespace std;

int main() {
long long n;
cin>>n;
string s;
long long a=0,b=0,x=0,y=0;
long long p[n],q[n];
for(long long i=0;i<n;i++) {
    cin>>p[i]>>q[i];

}
long long c=0,d=0;
for(long long i=0;i<n;i++) {
c=abs(a+p[i]);
d=abs(b+q[i]);
if(c-b<=500) {
    a+=p[i];
    s.push_back('A');
}
else if(d-a<=500) {
    b+=q[i];
        s.push_back('G');
}


}
cout<<s<<endl;



}
