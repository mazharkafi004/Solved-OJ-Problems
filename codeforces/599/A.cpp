#include<bits/stdc++.h>

using namespace std;


int main() {

long long a,b,c;
cin>>a>>b>>c;
//cout<<(a+b)+min(c,(a+b))<<endl;
if(2*(a+b)<a+b+c) {
    cout<<2*(a+b)<<endl;
    return 0;
}
if(b+c<a+c) {
  if(a<b+c) {
    cout<<a+min((a+2*b),(b+c))<<endl;;
}
else if(a>=b+c){
    cout<<b+c+min(a,(b+c))<<endl;
}
}
else {
   if(b<a+c) {
     cout<<b+min((b+2*c),(a+c))<<endl;
}
else if(b>=a+c){
    cout<<a+c+min(b,(a+c))<<endl;
}
}

}
