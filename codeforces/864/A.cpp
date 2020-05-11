#include<bits/stdc++.h>

using namespace std;

int main() {
long long a=0,b=0,c=0,d=0,e=0,n;
cin>>n;
deque<long long>p;
for(long long i=0;i<n;i++) {
    cin>>e;
    p.push_back(e);
}
for(long long i=0;i<n;i++) {
    if(p[0]==p[i]) {
        a++;
        c=p[i];
    }
    else {
        b++;
        if(b==1) {
            d=p[i];
        }

            if(d!=p[i]) {
                cout<<"NO"<<endl;
                return 0;

        }
    }
}
//cout<<a<<" "<<b<<endl;
if(a==b &&((a+b)==n)) {
        cout<<"YES"<<endl;
    cout<<c<<" "<<d<<endl;
}
else {
    cout<<"NO"<<endl;
}
}
