#include<bits/stdc++.h>


using namespace std;

int main() {
long long a,b,c;
cin>>a>>b>>c;
if((b-a)==0  ) {
    cout<<"YES"<<endl;
}
else if((b-a)*c>0) {
        if( (b-a)%c==0) {
    cout<<"YES"<<endl;}
    else {
            cout<<"NO"<<endl;
    }
}
else {
    cout<<"NO"<<endl;
}

}
