#include<bits/stdc++.h>

using namespace std;

int main() {

long long t;
cin>>t;
while (t--) {
    long long n,p,c,x=0,y=0,b=0;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>p>>c;
        if(x>p || y>c || p-x<c-y) {
            b++;
        }
        x=p;
        y=c;
    }
    if(b==0) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}


}
