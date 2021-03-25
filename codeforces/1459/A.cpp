#include<bits/stdc++.h>

using namespace std;

main() {
int t;
cin>>t;
while(t--) {
    int n,s=0,c=0;
    cin>>n;
    string a,b;
    cin>>a>>b;

    for(int i=0;i<n;i++) {
      if(a[i]>b[i]) {
        s++;
      }
      else if(a[i]<b[i]) {
        s--;
      }
    }
    if(s>0) {
        cout<<"RED"<<endl;
    }
    else if(s<0) {
            cout<<"BLUE"<<endl;
    }
    else {
         cout<<"EQUAL"<<endl;
    }

}

}
