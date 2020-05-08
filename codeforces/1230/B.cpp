#include<bits/stdc++.h>

using namespace std;

int main() {
long long a=1,b=0,c=0,d,e,n,m;
cin>>n>>m;
string s;
cin>>s;
if(m==0) {
    cout<<s<<endl;
    return 0;
}
if(n==1) {
    cout<<"0"<<endl;
    return 0;
}

  if(s[0]!='1') {
        s[0]='1';
       // cout<<s[0]<<endl;
        //m=m-1;
    }
    else {
        m=m+1;
    }

//for(long long i=0;i<m;i++) {
//    if(s[i]=='0') {
//        c++;
//    }
//}

//cout<<m<<endl;
for(long long i=1;i<m &&i<n;i++) {

    if(s[i]!='0' )  {
        s[i]='0';
       // cout<<s[i]<<endl;
       // m=m-1;
    }
    else {
        m++;
    }
//}
//cout<<m<<c<<endl;
//if(m+c>=n) {
//    cout<<1;
//    for(long long i=1;i<s.size();i++) {
//   cout<<"0";
//}
//cout<<endl;
//}
//else {
//        cout<<1;
//  d=(m+c);
//  for(long long i=0;i<(m+c);i++) {
//   cout<<"0";
//}


}
 for(long long i=0;i<s.size();i++) {
   cout<<s[i];
}
cout<<endl;
}
