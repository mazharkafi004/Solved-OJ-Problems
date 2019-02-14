#include<bits/stdc++.h>

using namespace std;

int main() {
long long int a,b,c,d;
int e=0;
cin>>a>>b>>c>>d;
if(a==b||a==c||a==d) {
    e++;
}
 if(b==c||b==d) {
    e++;
}
 if (c==d) {
    e++;
}

cout<<e<<endl;

}