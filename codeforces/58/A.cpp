#include<bits/stdc++.h>
#include<string>

using namespace std;

int main() {
char a[110];
string b="hello";
cin>>a;
int i,j=0,c=0,n;
n=strlen(a);
for(i=0;i<n;i++) {
    if(a[i]==b[j]) {
        j++;
        c++;
    }
}
if(c==5) {
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}

