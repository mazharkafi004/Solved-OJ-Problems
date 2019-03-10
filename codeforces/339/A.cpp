#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main() {
    string s;
    cin>>s;

int b=0,i,n=3;

string p;

int d=s.length();
for(i=0;i<s.length();i++) {
 if (isdigit(s[i])) {
    p.push_back(s[i]);
 }
}
int c=p.length();
char a[100];
for(i=0;i<p.length();i++) {
    a[i]=p[i];
}

sort(a,(a+c));
 for(i=0;i<p.length();i++) {

  cout<<a[i];

if(i<c-1) {
cout<<"+";

}
else {
    return 0;
}


}

cout<<""<<endl;

}