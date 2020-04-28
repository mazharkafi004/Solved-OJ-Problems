#include<bits/stdc++.h>

using namespace std;

int main() {
long long q;
cin>>q;
while(q--) {
    long long l,r,a,b;
    cin>>l>>r;
   long long sum=0;
   --l;
//long long n=r-a+1;
if(l%2==0) {
    a=l/2;
}
else {
    a=-((l+1)/2);
}
if(r%2==0) {
    b=r/2;
}
else {
    b=-((r+1)/2);
}
    cout<<b-a<<endl;

}


}
