
#include<bits/stdc++.h>

using namespace std;

int main() {
long long n;
cin>>n;
if(n%2==0) {
    for(long long i=n;i>=1;i--) {
        cout<<i<<" ";
    }
    cout<<endl;
}
else {
    cout<<-1<<endl;
}

}
