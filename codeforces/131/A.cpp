#include <bits/stdc++.h>
using namespace std;
int main() {

  string s;
  cin >> s;
for(int i = 0; i < s.size(); i++) {
    if(i!=0) {
      if(!isupper(s[i])) {
        break;
      }
    }
if(i==s.size()-1) {
for(int i=0;i< s.size();i++) {
 if(isupper(s[i])) {
s[i]=tolower(s[i]);
} 
  else {
s[i]=toupper(s[i]);
 }
 }
 }
}
cout<<s<<endl;

}
