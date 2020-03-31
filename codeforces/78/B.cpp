#include<bits/stdc++.h>

using namespace std;

int main() { 
 char p[]={'R','O','Y','G','B','I','V' };
 int n,a,b;
 cin>>n;
 a=n/7;
 b=n%7;
 while(a--) { 
 for(int i=0;i<=6;i++) {
cout<<p[i];
}
}
if(b==1){
cout<<"G";
}
else if(b==2){
cout<<"YG";
}

 else if(b==3){
cout<<"OYG";
}
else if(b==4){
cout<<"ROYG";
}
else if(b==5){
cout<<"ROYGV";
}
else if(b==6){
cout<<"ROYGVI";
}

}     