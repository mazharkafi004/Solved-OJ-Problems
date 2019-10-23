#include<bits/stdc++.h>



using namespace std;



int main () {
int t;

cin>>t;
while(t--) {


long long int  p,q,n,m,a=0,b=0,i,c=0,d=0,w;;
    cin>>n;
   for(i=1;i<=n;i++) {

        cin>>p;
        if(p%2==0) {
            a++;
        }
        else {
            b++;
        }


    }
     cin>>m;

    for(i=1;i<=m;i++) {
        cin>>q;
        if(q%2==0) {
            c++;
        }
else {
    d++;
}
    }
w=(a*c)+(b*d);
     cout<<w<<endl;


}
return 0;
}
