#include<bits/stdc++.h>

using namespace std; 
int main() {
 int a,t;
 cin>>a>>t;
 while(t--)
 {
 
 if(a%10==0) { 
a=a/10;
 
}

else { 
a=a-1;

}


}
 cout<<a<<endl;

 }