#include<bits/stdc++.h>

using namespace std;

int main() {

int a[1000];
int max,min,i,n,b=0;

cin>>n;
for(i=0;i<n;i++) {
cin>>a[i];
}
max=a[0];
min=a[0];
for (i=1;i<n;i++) {
    if(a[i]>max) {
        max=a[i];
        b++;
    }
    else if(a[i]<min) {
    min=a[i];
    b++;}
}
cout<<b<<endl;

}