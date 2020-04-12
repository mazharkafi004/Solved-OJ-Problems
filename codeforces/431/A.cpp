#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int a,b,c,d,p=0,x=0,y=0,z=0,sum=0,m;
    cin>>a>>b>>c>>d;
     cin>>s;
     m=s.size();
     for(int i=0;i<m;i++) {
            if(s[i]=='1') {
                p++;
            }
            else  if(s[i]=='2') {
                x++;
            }
            else  if(s[i]=='3') {
                y++;
            }
            else  if(s[i]=='4') {
                z++;
            }

     }
     cout<<(p*a)+(x*b)+(y*c)+(z*d)<<endl;
}
