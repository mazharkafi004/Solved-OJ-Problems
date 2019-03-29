#include<bits/stdc++.h>
#include<algorithm>

using namespace std;



int main() {
int p[1000];
int q[1000];
bool k[10];
int n,a,b,c,d,e=0,f=0,i,x,y;
cin>>a>>b;
for(i=0;i<a;i++) {
    cin>>p[i];
   k[p[i]]=true;
}
for(i=0;i<b;i++) {
    cin>>q[i];
}
sort(p,p+a);


sort(q,q+b);

for(i=0;i<b;i++) {
  if(k[q[i]]){
				cout<<q[i]<<endl;
				return 0;
}

}
cout<<min(p[0],q[0])<<max(p[0],q[0])<<endl;
}
