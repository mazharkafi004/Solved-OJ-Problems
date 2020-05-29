#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<(abs(x1-x2)*abs(y1-y2))+1<<endl;
}

}
