#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,b,s=0,m=0;
cin>>a>>b;
if(b%a!=0) {
    cout<<-1<<endl;
    return 0;
}
long long w=b/a;
while(w!=1) {
    if((w)%3==0) {
        (w)=(w)/3;
        m++;
    }
    else  if((w)%2==0) {
        (w)=(w)/2;
        m++;
    }
    else {
         cout<<-1<<endl;
    return 0;
    }
}
cout<<m<<endl;
}
