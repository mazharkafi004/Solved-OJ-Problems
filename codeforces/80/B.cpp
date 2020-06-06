#include<bits/stdc++.h>


using namespace std;



int main() {

string s;
cin>>s;
long long h2=s[0]-'0',h1=s[1]-'0',m2=s[3]-'0',m1=s[4]-'0';
long long h=h2*10+h1;
long long m=m2*10+m1;
if(h>=12) {
    h=h-12;
}
double x=0,y=0,a=0,b=0,z=0,c=0,d=0,e=0;
a=m%5;
b=m/5;
c=(a/5)*30;
y=(b*30)+c;

//printf("%.12lf",y);

d=(m/2.0);
//printf("%.12lf",d);
x=h*30+d;
printf("%.12lf %.12lf",x,y);


}
