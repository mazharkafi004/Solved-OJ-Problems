#include<bits/stdc++.h>
#include<string>

using namespace std;
int main() {
char a[1000];
int i;
cin>>a;
for(i=0;i<strlen(a);i++) {
    if(a[i]=='.') {
cout<<"0";

    }
    else if(a[i]=='-' && a[i+1]=='.') {
cout<<"1";
i++;
    }
    else if(a[i]=='-' && a[i+1]=='-') {
cout<<"2";
i++;
    }
}
cout<<"";


}