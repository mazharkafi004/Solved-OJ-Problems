#include<bits/stdc++.h>

using namespace std;


int main() {

long long h1,h2,a,b,c=0,d=0,x=0,y=0;

cin>>h1>>h2;
cin>>a>>b;

if(a<=b && (h2-h1>8*a)) {
    cout<<-1<<endl;
    return 0;
}

while(1) {
    c++;
    if(c==1)
        {
        h1+=a*8;
         //cout<<h1<<endl;
        if(h1>=h2) {
            cout<<c-1<<endl;
            return 0;
        }
        h1-=b*12;
      //  cout<<h1<<endl;
    }
    else {
        h1+=12*a;
    //    cout<<h1<<endl;
        if(h1>=h2) {
            cout<<c-1<<endl;
            return 0;
        }
        h1-=b*12;

    }

}


}
