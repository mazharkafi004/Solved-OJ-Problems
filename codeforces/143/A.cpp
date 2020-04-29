#include<bits/stdc++.h>

using namespace std;

int main() {
 long long r1,r2,c1,c2,d1,d2,a,b,c,d;
 cin>>r1>>r2;
 cin>>c1>>c2;
 cin>>d1>>d2;
 //cout<<((d1-c2)+r1)%2<<endl;
 if(((d1-c2)+r1)%2==0) {
    a=((d1-c2)+r1)/2;
    //b=r1-a;
    c=c1-a;
    d=r2-c;
    b=c2-d;
//    cout<<r1<<" "<<c1<<endl;
//    cout<<r2<<" "<<c2<<endl;
//    cout<<d1<<" "<<d2<<endl;
    if(a<1 || a>9) {
         cout<<-1<<endl;
         return 0;
    }
  else   if(b<1 || b>9) {
         cout<<-1<<endl;
         return 0;
    }
  else   if(c<1 || c>9) {
         cout<<-1<<endl;
         return 0;
    }
   else if(d<1 || d>9) {
         cout<<-1<<endl;
         return 0;
    }
    if(a==b || a==c || a==d) {
        cout<<-1<<endl;
    }
    else if(c==b || c==a || c==d) {
        cout<<-1<<endl;
    }
    else if(b==a || b==c || b==d) {
        cout<<-1<<endl;
    }
    else if(d==b || d==c || d==a) {
        cout<<-1<<endl;
    }
    else {
        cout<<a<<" "<<b<<endl;
     cout<<c<<" "<<d<<endl;
    }
 }
 else {
    cout<<-1<<endl;
 }


}
