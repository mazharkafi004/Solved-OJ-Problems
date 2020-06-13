#include<bits/stdc++.h>


using namespace std;
#define pi 3.141592653589793238
int main() {

long long n,b=0;
cin>>n;
double a=0;
double p[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
}
sort(p,p+n);
  for(long long i=n-1;i>=0;i--) {
   b++;
   if(b%2!=0) {
    a+=pi*p[i]*p[i];
   }
   else {
       a-=pi*p[i]*p[i];
   }
}
  printf("%.12lf",a);
}
