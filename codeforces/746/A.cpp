#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,r;
    cin >> a;
    cin >> b;
    cin >> c;

    int i=a;
    while(1){

        if(b/(i*2)>=1 && c/(i*4)>=1){
            r=i*7;
            break;
        }
        i--;
        if(i==0){
            r=0;
            break;
        }
    }
    cout << r <<endl;
}