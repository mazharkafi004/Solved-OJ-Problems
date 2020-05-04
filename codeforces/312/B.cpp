#include<bits/stdc++.h>

using namespace std;

int main() {
double a,b,c,d,e=0,f=0,x=0,y=0,z=0;
cin>>a>>b>>c>>d;
e=(1-(a/b))*(1-(c/d));
printf("%6lf",(a/b)/(1-e));
}
