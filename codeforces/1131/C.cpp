#include<bits/stdc++.h>

 using namespace std;

 int main()
 {
     int n,i;
  int a[1000];
 cin>>n;
  for( i=0;i<n;i++){
         cin>>a[i];
     }
     sort(a,a+n);
     cout<<a[0]<<" ";
     if(n%2==0){
         for(i=2;i<n-1;i++,i++){
            cout<<a[i]<<" ";
        }
         for(i=n-1;i>=1;i--,i--){
            cout<<a[i]<<" ";
         }
     }else{
        for(i=2;i<n;i++,i++){
             cout<<a[i]<<" ";

        }
         for(i=n-2;i>=1;i--,i--){
             cout<<a[i]<<" ";

         }
   }
    cout<<""<<"\n";
     return 0;
 }
