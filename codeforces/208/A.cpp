#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
    string a;
    cin>>a;
    int i;
    for(i=0;i<a.length();i++){
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B'){
            if(i!=0)
            cout <<" ";
            i+=2;
        }
        else{
            cout<<a[i];
        }
    }
}
