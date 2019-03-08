#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
long long  a,sum,sum2,num;
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin>>a;
        num=1;
        sum2=0;
        sum=a*(a+1)/2;
        while (num<=a) {
            sum2+=num;
            num*=2;
        }
        cout<<sum-sum2*2<<endl;
    }
}