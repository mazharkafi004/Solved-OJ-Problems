#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,a=0,b=0;
cin>>n;
long long p[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
    if(p[i]%2==0) {
        b++;
    }
    else {
        a++;
    }
}
if(a==0) {

    cout<<"Second"<<endl;

}
else {
    cout<<"First"<<endl;
}


}
