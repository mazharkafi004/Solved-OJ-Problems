#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long a,b,c,d,e,f;
    cin>>a>>b>>c;
    e=a/c;
    f=b/c;
    if(a%c!=0) 
        e++;
    
    if(b%c!=0) 
        f++;
    
    d=e*f;
    
    cout<<""<<d<<endl;
    return 0;
}