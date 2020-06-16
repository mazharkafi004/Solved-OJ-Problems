#include<bits/stdc++.h>


using namespace std;


int main() {

long long t;
cin>>t;
while(t--) {

    long long n;
    cin>>n;
    long long p[n];
    long long a=0,b=0,c=0;
    for(long long i=0;i<n;i++)
    {
            cin>>c;
       if(i%2==0) {

       if(c%2!=0) {
        a++;
       }
       }
       else {
        if(c%2==0) {
        b++;
       }
       }

    }
 if(a==b) {
    cout<<a<<endl;
 }
 else {
    cout<<-1<<endl;
 }
}

}
