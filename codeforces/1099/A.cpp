#include<bits/stdc++.h>

using namespace std;


int main() {
int  w,h,u1,u2,d1,d2,s,sum=0,x,y;
cin>>w>>h;
cin>>u1>>d1;
cin>>u2>>d2;

for(int i=h;i>=0;i--) {
    w+=i;
    if(i==d1) {
        w-=u1;
        if(w<0) {
            w=0;
        }
    }
    else   if(i==d2) {
        w-=u2;
        if(w<0) {
            w=0;
        }
    }
}

cout<<w<<endl;
}
