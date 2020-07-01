#include<bits/stdc++.h>

using namespace std;

int main() {


 long long t;
 cin>>t;
 while(t--) {
    long long a=0,n,b=0,c=0,d=0;
    cin>>n;
    if(n==1) {
        cout<<0<<endl;
    }
    else {
            a=0;
        while(1) {
            if(n%2==0) {
                    b=n%6;
            if(b!=0) {
                    c=1;
                break;

            }
                n=n/6;
                if(n==0) {

                    c=1;
                     break;
                }
                if(n==1) {
                        a++;
                    c=0;
                    break;
                }
                a++;
            }
            else {
                n=n*2;
                a++;
            }
        }
        if(c==1) {
            cout<<-1<<endl;
        }
        else {
            cout<<a<<endl;
        }
    }
 }
}
