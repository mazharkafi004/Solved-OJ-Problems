#include<bits/stdc++.h>

using namespace std;

int main() {

long long n;
cin>>n;
double ans=0;

for(long long i=1;i<=n;i++) {
    ans+=(1.0/i);
}
printf("%.12lf",ans);

}

