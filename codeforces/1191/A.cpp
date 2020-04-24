#include<bits/stdc++.h>


using namespace std;

int main() {
long long x,y,z;
cin>>x;
y=x%4;
if(y==1) {
    cout<<0<<" "<<"A"<<endl;
}
else if(y==2) {
    cout<<1<<" "<<"B"<<endl;
}
else if(y==3) {
    cout<<2<<" "<<"A"<<endl;
}
else if(y==0) {
    cout<<1<<" "<<"A"<<endl;
}


}
