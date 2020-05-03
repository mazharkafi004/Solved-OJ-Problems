#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,b,c,d;
string s,t,r;
cin>>s;
cin>>t;
cin>>r;
if(s[0]=='r') {
    if(t[0]=='r' && r[0]=='r') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='r' && r[0]=='p') {
        cout<<"S"<<endl;
    }
    else  if(t[0]=='r' && r[0]=='s') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='p' && r[0]=='r') {
        cout<<"M"<<endl;
    }
    else  if(t[0]=='p' && r[0]=='p') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='p' && r[0]=='s') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='s' && r[0]=='r') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='s' && r[0]=='p') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='s' && r[0]=='s') {
        cout<<"F"<<endl;
    }
}
else if(s[0]=='p') {
    if(t[0]=='r' && r[0]=='r') {
        cout<<"F"<<endl;
    }
    else  if(t[0]=='r' && r[0]=='p') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='r' && r[0]=='s') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='p' && r[0]=='r') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='p' && r[0]=='p') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='p' && r[0]=='s') {
        cout<<"S"<<endl;
    }
    else  if(t[0]=='s' && r[0]=='r') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='s' && r[0]=='p') {
        cout<<"M"<<endl;
    }
    else  if(t[0]=='s' && r[0]=='s') {
        cout<<"?"<<endl;
    }
}
else {
    if(t[0]=='r' && r[0]=='r') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='r' && r[0]=='p') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='r' && r[0]=='s') {
        cout<<"M"<<endl;
    }
    else  if(t[0]=='p' && r[0]=='r') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='p' && r[0]=='p') {
        cout<<"F"<<endl;
    }
    else  if(t[0]=='p' && r[0]=='s') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='s' && r[0]=='r') {
        cout<<"S"<<endl;
    }
    else  if(t[0]=='s' && r[0]=='p') {
        cout<<"?"<<endl;
    }
    else  if(t[0]=='s' && r[0]=='s') {
        cout<<"?"<<endl;
    }
}

}
