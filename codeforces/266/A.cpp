#include<bits/stdc++.h>

using namespace std;

int main () {
int n,count=0;
char b[1000];
cin>>n;
cin>>b;

for(int i=0;i<n;i++){
        if(b[i]==b[i+1]) count++;
    }
cout<<count<<endl;

}
