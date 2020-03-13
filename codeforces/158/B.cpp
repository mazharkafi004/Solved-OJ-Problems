#include<bits/stdc++.h>

using namespace std;

int main() {
    int a,b,d,i,n,t,a1=0,a2=0,a3=0,a4=0,x,y,z,q,w;
     int c=0;
    cin>>t;
    int p[t];
    for(i=1;i<=t;i++) {

        cin>>p[i];
 if(p[i]==1){
            a1++;
        }
          if(p[i]==2){
            a2++;

        }
         if(p[i]==3){
            a3++;

        }
        if(p[i]==4) {
            a4++;
}
if(a1-a3>0) {
    b=(a2*2+(a1-a3)+3)/4;
}
else {
    b=((a2*2)+3)/4;
}


    }

cout<<b+a3+a4<<endl;

}
