#include<bits/stdc++.h>


using namespace std;

int main() {
 long long n;
 cin>>n;
 vector<long long>p;
 for(long long i=0;i<n;i++) {
    long long a;
    cin>>a;
    p.push_back(a);
 }
if(n==1) {
    cout<<0<<endl;
    cout<<p[0]<<endl;
}
else {
        long long a=0,b=0,c=1;
    for(long long i=0;i<n-1;i++) {
       a=__gcd(p[i],p[i+1]);
if(a!=1) {
    p.insert(p.begin()+i+1,c);
    b++;
    n++;
}
    }
    cout<<b<<endl;
    for(long long i=0;i<p.size();i++) {
        cout<<p[i]<<" ";
    }
}


}
