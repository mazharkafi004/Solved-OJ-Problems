#include<bits/stdc++.h>

using namespace std;

int main() {
int a,b;
cin>>a>>b;
if(a==0 && b==0) {
     cout<<"NO"<<endl;
    return 0;
}
else if(a==b) {
     cout<<"YES"<<endl;
    return 0;
}
else if((a-1)==b) {
    cout<<"YES"<<endl;
    return 0;
}
else if((b-1)==a) {
   cout<<"YES"<<endl;
    return 0;
}
else {
     cout<<"NO"<<endl;
    return 0;
}

}
