#include<bits/stdc++.h>



using namespace std;


int main(){
    int a,b,n,i=0,p=0,q=0;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>a>>b;
        if(a>b) {
            p++;
        }
        else if (a<b){
            q++;
        }

    }
    if(p>q) {
        cout<<"Mishka";
    }
    else if(p==q) {
        cout<<"Friendship is magic!^^";
    }
    else {
        cout<<"Chris";
    }
}

