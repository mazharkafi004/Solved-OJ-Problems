#include<bits/stdc++.h>

using namespace std;
int main() {
int i,n,a=0;
string s;
cin>>n;
for(i=0;i<n;i++) {
    cin>>s;
        if(s=="Tetrahedron")
        {a=a+4;}
        if(s=="Cube")
          {a=a+6;}
        if(s=="Octahedron")
          {a=a+8;}

        if(s=="Dodecahedron")
          {a=a+12;}

        if(s=="Icosahedron")
          {a=a+20;}

}
cout<<a<<endl;
}
