#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a,b,c,p;
    cin >> a;
    
    if(a%2==0) {
        if(a%4==0) p = 0;
        else p = 1;
    }
    
    else{
        if((int)(a/2)%2==0) p = 1;
        else p = 0;
    }
    
    cout << p << endl;
    
}