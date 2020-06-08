#include<bits/stdc++.h>

using namespace std;


int main() {

long long n,a,b;
cin>>a>>b;
double x=0,y=0;
x=sqrt(a*a+b*b);
n=x;
if(a*b<0) {

    if(x==n) {
        cout<<"black"<<endl;
    }
    else if(n%2==1) {
         cout<<"black"<<endl;
    }
    else {
        cout<<"white"<<endl;
    }
}
else {
        if(x==n) {
        cout<<"black"<<endl;
    }
    else if(n%2==1) {
         cout<<"white"<<endl;
    }
    else {
        cout<<"black"<<endl;
    }
}

}
