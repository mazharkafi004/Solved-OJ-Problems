#include<bits/stdc++.h>
#include<string>

using namespace std;

int main() {

char p[1000];
int n,i=0,q;

cin>>n;

for ( i=0;i<n;i++) {
   cin>>p;
    if (strlen(p)>10) {
            q=strlen(p);


            cout<<p[0]<<q-2<<p[q-1]<<endl;


    }
    else
    {
        printf("%s\n",p);

    }
}




}