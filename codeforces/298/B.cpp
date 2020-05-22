#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,sx=0,sy=0,ex=0,ey=0,a=0,b=0,c=0,d=0,e=0;
cin>>n>>sx>>sy>>ex>>ey;
string s;
cin>>s;
for(long long i=0;i<s.size();i++) {
    if(s[i]=='E') {
            //cout<<i<<endl;

        if(ex>sx) {
            sx=sx+1;
            b=i+1;
            //cout<<sx<<"e"<<endl;
        }
    }
     if(s[i]=='W') {
            //cout<<i<<endl;
     if(ex<sx) {
            sx=sx-1;
              c=i+1;
           //  cout<<sx<<"w"<<endl;
        }
    }
         if(s[i]=='N') {
               // cout<<i<<endl;
     if(ey>sy) {
            sy=sy+1;
              d=i+1;
             //cout<<sy<<"n"<<endl;
        }
    }
      if(s[i]=='S') {
            //cout<<i<<endl;
        if(ey<sy) {
            sy=sy-1;
              e=i+1;
             //cout<<sy<<"s"<<endl;
        }
    }
    //cout<<e<<b<<c<<d<<endl;
    //cout<<sx<<" "<<sy<<endl;
    if(sx== ex && sy ==ey) {
        cout<<i+1<<endl;
        return 0;
    }

}
cout<<-1<<endl;}

