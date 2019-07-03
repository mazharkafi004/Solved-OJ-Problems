#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a;
b=a%2;
if(b==0) {
    printf("%d", 1<<(a/2));
}
else
{
    cout<<"0"<<endl;
}
return 0;
}
