#include<bits/stdc++.h>

using namespace std;

int main() {

long long n;
cin>>n;

 string s="codeforces";
 if(n==1) {
    cout<<s<<endl;
    return 0;
 }
long long a=0,b=0,c=0,d=0,e=0,p=2,i,j;
while(1) {
    for( i=0;i<=10;i++) {
             b=round(pow(p-1,10-i));
        a=round(pow(p,i));
       c=a*b;

    
    if(c>=n) {
        d=1;
        break;
    }}
   if(d==1) { break;}
    p++;
}
for(j=0;j<i;j++) {
    for(e=1;e<=p;e++) {
        cout<<s[j];
    }
}
for(;j<10;j++) {
    for(e=1;e<=p-1;e++) {
        cout<<s[j];
    }
}
}


