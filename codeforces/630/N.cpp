#include<bits/stdc++.h>

using  namespace std;

int main() {
double a,b,c,d,x1,x2;
cin>>a>>b>>c;
d=(b*b)-(4*a*c);
x1=((-b)+sqrt(d))/(2*a);
x2=((-b)-sqrt(d))/(2*a);
if(x2>x1) {
    swap(x1,x2);
}
printf("%.7lf\n%.7lf\n",x1,x2);
}
