#include<bits/stdc++.h>
#include<string>

using namespace std;
int main() {
char a[100000];
int b=0,c=0,n;
int i;
cin>>n;
for(i=0;i<n;i++) {
        cin>>a[i];
    if(a[i]=='A') {
b++;


    }
    else if (a[i]=='D') {
        c++;

    }

}
if(b>c) {
    cout<<"Anton"<<endl;
}
else if(b<c) {
    cout<<"Danik"<<endl;
}
else if(b=c) {
    cout<<"Friendship"<<endl;
}



}