#include<bits/stdc++.h>


using namespace std;


int main()
{
    double h,n;
    cin>>n>>h;
    double a=0;
    for(double i=1;i<n;i++) {
        a=sqrt(i/n)*h;
        printf("%.12lf ",a);
       // cout<<sqrt()
//        cout<<i<<" "<<n<<endl;
//         cout<<fixed<<setprecision<<1*3<<endl;;
//        cout<<fixed<<setprecision<<a<<endl;
//        cout<<fixed<<setprecision<<a*h<<endl;
    }
    cout<<endl;
}
