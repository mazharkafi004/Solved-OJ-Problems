#include<bits/stdc++.h>

using namespace std;

int main() {
long long a=0,b=0,c=0;
string s;
cin>>s;
c=abs(s[0]-'a');
if(c>13) {
    b+=(26-c);
}
else {
    b+=c;
}
for(long long i=1;i<s.size();i++) {
    a=abs(s[i]-s[i-1]);

    if(a>13) {

     a=26-a;
    }
   // cout<<a<<endl;
          b+=a;


}
cout<<b<<endl;

}
