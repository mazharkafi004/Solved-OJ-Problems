#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
  int   n=s.size();
    for(int i=0;i<n;i++) {
    if(s[i]=='a' ||s[i]=='h') {
        if(s[i+1]=='1' ||s[i+1]=='8') {
                cout<<3<<endl;
                return 0;

    }
    else {
        cout<<5<<endl;
        return 0;
    }
    }
    else  if(s[i]!='a' ||s[i]!='h') {
        if(s[i+1]=='1' ||s[i+1]=='8') {
                cout<<5<<endl;
                return 0;

    }
    else {
        cout<<8<<endl;
        return 0;
    }
    } }

}
