#include<bits/stdc++.h>
#include<string>


using namespace std;

int main () {
int a,n,count=0;
char b[10000];
char c[10000];

cin>>b;
cin>>c;

for(int i=0;i<strlen(b);i++){
        if(b[i]==c[i]) {
            cout<<"0";
        }
        else {
            cout<<"1";
        }
    }
cout<<""<<endl;

}
