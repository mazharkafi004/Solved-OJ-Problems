#include <bits/stdc++.h>

using namespace std;
int main(){
long long  n,sum=0,b=0,c=0;
int a[101];
cin>>n;

for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
sort(a,a+n);

for(int i=0;i<n;i++){
    if(sum>=c){
        sum-=a[n-(i+1)];
        c+=a[n-(i+1)];
        b++;
    }
}
cout<<b<<endl;
    return 0;
}
