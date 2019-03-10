#include<bits/stdc++.h>

using namespace std;

int main() {
int s,v1,v2,t1,t2,a,b,c;
cin>>s>>v1>>v2>>t1>>t2;
a=(2*t1)+(v1*s);
b=(2*t2)+(v2*s);
if(a<b) {
    cout<<"First"<<endl;
}
else if(b<a) {
    cout<<"Second"<<endl;
}
else if(b==a) {
    cout<<"Friendship"<<endl;
}
}