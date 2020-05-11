#include<bits/stdc++.h>

using namespace std;

int main() {
double n,k,a=0,c;
cin>>n>>k;
for(double i=0;i<n;i++) {
    cin>>c;
    a+=c;
}
double x=k-.5,y=0,z=0;
//printf("%.7lf\n",x);
if((a/n)>=x) {
    cout<<0<<endl;
}
else {
    for(long long i=1;;i++) {
        a+=k;
        n++;
        // printf("%.7lf\n",a);
        z=a/n;
        //printf("%.7lf\n",z);
        if((z)>=x) {
    cout<<i<<endl;
    break;
}
    }
}

}
