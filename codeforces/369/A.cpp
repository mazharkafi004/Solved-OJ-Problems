#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,m,k,a=0,b=0,c,s=0,p=0;
cin>>n>>m>>k;
for(long long i=0;i<n;i++) {
    cin>>c;
    if(c==1) {
        a++;
    }
    else {
        b++;
    }
}
if(a>m) {
    p=a-m;
    if(b>k) {
        s=b-k;
    }
    if(p+s<0) {
        cout<<0<<endl;
    } else {
    cout<<p+s<<endl;}
}
else {
        p=m-a;
     k=p+k;

        s=b-k;
        if(s<0) {
            s=0;
        }
        cout<<s<<endl;

}


}
