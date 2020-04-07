#include<bits/stdc++.h>

using namespace std;

int main() {
int t,n,b,a,sum=0,x=0,y;

cin>>t>>a;
while(t--) {
    cin>>n;
    sum+=n;
}
if(sum==0) {
    cout<<0<<endl;
    return 0;
}

y=sum+a;
if(y>0) {
        while(1) {


x++;

    b=a*x;
    y=sum-b;



if(y<=0) {
        cout<<x<<endl;
        break;

}
}

}
else if(y=0) {
    cout<<1<<endl;
    return 0;
}
else {
while(1) {


x++;

    b=a*x;
    y=sum+b;



if(y>=0) {
        cout<<x<<endl;
        break;

}
}
}

}
