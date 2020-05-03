#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,b,c=0,d=0,sum=0,s=0,x=0,y=0;
cin>>a>>b;
sum=a;
s=b;
if(b<2) {
    cout<<"Valera"<<endl;
    return 0;
}
for(long long i=1;i<=a;i+=2) {
    c++;
    sum=sum-i;
   // cout<<sum<<endl;
    if(sum==0) {
       // x=1;
         break;
    }
    else if(sum<0) {
            c--;
            //sum=sum+i;
        break;

    }
}
for(long long i=2;i<=b;i+=2) {
    d++;
    s=s-i;
    //cout<<s<<endl;
    if(s==0) {
       // y=1;
         break;
    }
   else if(s<0) {
        d--;
        //s=s+i;
        break;
    }
}
//cout<<c<<" "<<d<<endl;
//cout<<sum<<" "<<s<<endl;
if(c==d) {

        cout<<"Vladik"<<endl;

}
else if(c>d) {
    cout<<"Valera"<<endl;
}
else {
    cout<<"Vladik"<<endl;
}

}
