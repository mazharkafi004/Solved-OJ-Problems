#include<bits/stdc++.h>

using namespace std;

int main() {

long long n,a=0,x=0,y=0,c;
cin>>n;
vector<long long>p;

for(long long i=0;i<n;i++) {
    cin>>c;
    p.push_back(c);
}
//sort(p,p+n);
for(long long i=0;i<n;i++) {
   a++;
   //vector<long long> ::iterator it;
   if(a%2!=0) {
        if(p[i]>p[n-1]) {
            x+=p[i];

            //p.pop_back(p[i]);

        }
        else {
             x+=p[n-1];
      i=i-1;
             n=n-1;
        }

   }
   else {
 if(p[i]>p[n-1]) {
            y+=p[i];

        }
        else {
             y+=p[n-1];
   i=i-1;
             n=n-1;
        }
   }
  //cout<<x<<" "<<y<<endl;
}
cout<<x<<" "<<y<<endl;

}
