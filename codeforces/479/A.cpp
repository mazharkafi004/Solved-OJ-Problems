#include<bits/stdc++.h>

using namespace std;

int main() {

int a,b,c,d,e,f,g,h,i;
cin>>a>>b>>c;

d=a+(b*c);
e=a*(b+c);
f=a*b*c;
g=(a+b)*c;
h=a+b+c;


if(d>=e && d>=f && d>=g && d>=h )  {
    cout<<d<<endl;
}
else if(e>=d && e>=f && e>=g && e>=h )

    {
    cout<<e<<endl;
}

else if(f>=d && f>=e && f>=g && f>=h )

    {
    cout<<f<<endl;

}
else if(g>=d && g>=f && g>=e && g>=h)

    {
    cout<<g<<endl;
}
else if(h>=d && h>=f && h>=e && h>=g)

    {
    cout<<h<<endl;
}


}