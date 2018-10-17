#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,i,j,arr[1000],count=0;
    cin>>n>>h;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>h)
            count++;
    }
    cout<<((n-count)*1 + count*2)<<endl;
}