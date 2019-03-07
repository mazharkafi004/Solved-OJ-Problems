#include<bits/stdc++.h>

using namespace std;

int main()
{ int a,b,c,d=0,e=0,f,g,p,q;
    int h1,m1,h2,m2;
  scanf("%d:%d", &h1, &m1);
scanf("%d:%d", &h2, &m2);
a=(h1+h2)/2;
c=(h1+h2)%2;
if(c!=0) {
   f=(m1+m2+60)/2;
   if(f>=60) {
    g=f%60;
cout<<setw(2)<<setfill('0')<<a+1<<":"<<setw(2)<<setfill('0')<<g<<endl;

   }
   else{
cout<<setw(2)<<setfill('0')<<a<<":"<<setw(2)<<setfill('0')<<f<<endl;

   }

}
else {p=(m1+m2)/2;
   if(p>=60) {
    q=p%60;
     cout<<setw(2)<<setfill('0')<<a+1<<":"<<setw(2)<<setfill('0')<<q<<endl;

   }
   else{
        cout << setw(2) << setfill('0') << a <<":"<< setw(2) << setfill('0') <<p<< endl;

   }

}

}