#include<bits/stdc++.h>

using namespace std;

int main() {
long long t=4;
long long p[4];
for(long long i=0;i<t;i++) {
    cin>>p[i];
}
sort(p,p+t);
if(p[0]+p[1]+p[2]==p[3]) {
    cout<<"YES"<<endl;
}
else if(p[1]+p[2]==p[3]+p[0]) {
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}

}
