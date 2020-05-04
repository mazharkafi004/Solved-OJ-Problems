#include<bits/stdc++.h>

using namespace std;

int main() {
long long r,g,v,a=0,b=0,c=0,x=0,y=0,z=0,p,q,s;
cin>>r>>g>>v;
if(r==0 ) {
    cout<<(g/3)+(v/3)<<endl;
    return 0;
}
else if(g==0) {
     cout<<(r/3)+(v/3)<<endl;
    return 0;
}
 else if(v==0) {
     cout<<(r/3)+(g/3)<<endl;
    return 0;
}
if(r%3==0) {
    a=r/3;
}
else {
    a=r/3;
    x=r%3;
}
if(g%3==0) {
    b=g/3;
}
else {
    b=g/3;
    y=g%3;
}
if(v%3==0) {
    c=v/3;
}
else {
    c=v/3;
    z=v%3;
}
if(x<=y && x<=z) {
    p=x;
    if(y<=z) {
        q=y;
        s=z;
    }
    else {
         q=z;
        s=y;
    }

}
else if(y<=x && y<=z) {
    p=y;
     if(x<=z) {
        q=x;
        s=z;
    }
    else {
         q=z;
        s=x;
    }
}
else {
    p=z;
     if(y<=x) {
        q=y;
        s=x;
    }
    else {
         q=x;
        s=y;
    }
}
//cout<<a+b+c<<endl;
//cout<<p<<q<<s<<endl;
if(q==2 && s==2 && p==0) {
   if(a==p) {
    a=a-1;
    if(a<0) {
        cout<<0<<endl;
        return 0;
    }
   }
   else if(b==p) {
    b=b-1;
    if(b<0) {
        cout<<0<<endl;
        return 0;
    }
   }
   else {
    c=c-1;
    if(c<0) {
        cout<<0<<endl;
        return 0;
    }
   }
   cout<<a+b+c+2+p<<endl;
}
else {
    cout<<a+b+c+p<<endl;
}

}
