#include<bits/stdc++.h>

using namespace std;

int main() {

long long a,b,c,d,n;
cin>>n;
while(n--) {
    cin>>a;
    if(a%2==0) {
        cout<<(a/2)-1<<endl;
    }
    else {
        cout<<(a/2)<<endl;
    }
}

}
