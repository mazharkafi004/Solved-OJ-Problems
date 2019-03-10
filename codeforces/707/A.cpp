#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a=0;
    char s[2];
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j < m; j++) {
            cin>>s;
            if(s[0]!='B' && s[0]!='W' && s[0]!='G') {
                a++;
            }
        }
    }
if(a!=0) {

             cout<<"#Color"<<endl;
            }
            else {
                cout<<"#Black&White"<<endl;
            }
}

