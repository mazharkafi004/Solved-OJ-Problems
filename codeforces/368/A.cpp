#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,d,m,a=0,b=0,q;
cin>>n>>d;
vector <long long > p;
for(long long i=0;i<n;i++){
    cin>>q;
    p.push_back(q);
}
cin>>m;
sort(p.begin(),p.end());

//cout<<a<<d<<m-n<<endl;
if(m>n) {
        for(long long i=0;i<n;i++){
   a+=p[i];
}
    b=m-n;
    cout<<a-(b*d)<<endl;
}
else {
    for(long long i=0;i<m;i++){
   a+=p[i];
}
    cout<<a<<endl;
}


}
