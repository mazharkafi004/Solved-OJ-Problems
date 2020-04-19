#include<bits/stdc++.h>

using namespace std;


int main()  {
 int t,a=0,b=0,c=0,d=0,e=0,f=0;
 cin>>t;
 //cout<<t;

    int p[t+2];
    for(int i=1;i<=t;i++) {
        cin>>p[i];
    }
    for(int i=1;i<=t;i++) {
        if(p[i]==29){
           a++;
        }
        if(p[i]==28) {
            b++;
        }
    }
    if(t>=12 && a==0 ) {
            if(b==0) {
        cout<<"NO"<<endl;
        return 0;}
    }
         if(a>1) {
            cout<<"NO"<<endl;
            return 0;
        }
        else if(a==1) {
            a=0;
        }

//    for(int i=1;i<=t;i++) {
//        cout<<p[i];
//    }
    for(int i=1;i<=t;i++) {
       if(p[i]==28||p[i]==29) {
          if(p[i+1]==31) {
            a=a;
           // break;
          }
          else if(i==t){
            a=a;
          }
          else {
            a++;
          }
       }
      else if(p[i]==31) {
            if( p[i+1]==31)  {
              if(p[i+2]==31) {
                a++;
                //cout<<p[i]<<p[i+1]<<p[i+2]<<endl;
              }
              else {
                a=a;
              }
//              else {
//                 cout<<p[i]<<p[i+1]<<p[i+2]<<endl;
//              }

            }
            else {
                a=a;
            }
//            else {
//                 cout<<p[i]<<p[i+1]<<p[i+2]<<endl;
//            }

       //b++;}
       }
       else if(p[i]==30 && p[i+1]==31 ) {
            if(p[i+2]==29 ||p[i+2]==28) {
                 a++;
                 //e++;
            }
            else {
                a=a;
            }

       }
       else if(p[i]==30 && p[i+1]==30) {
            //cout<<p[i]<<p[i+1]<<endl;
       a++;
      // c++;
       }
       else if(p[i]==30 ) {

            if(p[i+1]==28 || p[i+1]==29) {
            //cout<<p[i]<<p[i+1]<<endl;


            a++;

       //f=i;
       //d++;
       }

       }
    }
   // cout<<a<<endl;
    //cout<<a<<b<<c<<d<<e<<" "<<f<<endl;
    if(a==0) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }



}
