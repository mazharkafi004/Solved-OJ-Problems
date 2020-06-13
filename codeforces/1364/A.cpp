#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long a,b,c,d=0,e=0,f=0,x=0,y=0,z=0;
    cin>>a>>b;
    vector<long long>p;
    for(long long i=0;i<a;i++) {
        cin>>c;

        z+=c;
        if(c%b!=0) {
          //     f++;

            x++;
      p.push_back(i);
    }}
    if(z%b!=0) {
        cout<<a<<endl;
    }
   else if(x==0) {
        cout<<-1<<endl;
    }
    else {
            d=p.size();
//    for(long long i=0;i<d;i++) {
//        cout<<p[i]<<endl;
//    }
    f=min(p[0]+1,a-p[d-1]);
    cout<<a-f<<endl;
       }
    }



}




