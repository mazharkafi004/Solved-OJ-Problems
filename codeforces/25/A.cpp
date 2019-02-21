#include<bits/stdc++.h>

using namespace std;

int main() {

int a;
int max,i,n,p,q=0,r=0,b=0,c=0;
cin>>n;
for(i=0;i<n;i++) {
    cin>>a;
    if(a%2==1) {
				b++;
				q=i;
			}
			else {
				c++;
				r=i;
			}
}
if(b<c) {
    cout<<q+1<<endl;
}
else  {
    cout<<r+1<<endl;
}


}
