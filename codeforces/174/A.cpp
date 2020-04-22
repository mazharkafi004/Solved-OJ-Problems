#include<bits/stdc++.h>

using namespace std;

int main() {
long long n;
double a,sum=0,m;
cin>>n>>a;
sum=a;

long long p[n],x=0;
for(long long i=0;i<n;i++) {
    cin>>p[i];
    sum+=p[i];

}
double b=sum/n;
for(long long i=0;i<n;i++) {
    if(p[i]>b) {
        x++;
    }
}
if(x==0) {
for(long long i=0;i<n;i++) {
    printf("%6lf\n",b-p[i]);
}}
else {
    cout<<-1<<endl;
}




}
