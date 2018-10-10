#include <cstdio>
#include <memory>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
int main(){	int a=0,b=0;
string c;
cin>>c;
for(int i=0;i<c.length();i++)
    if(isupper(c[i])) a++;
else b++;	
for(int i=0;i<c.length();i++)
    printf( "%c",((a>b) ? toupper(c[i]):tolower(c[i]) ) );
    
return 0;
}
