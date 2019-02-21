#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    
        for(int i=0;i<n;i++)  
        {
            if(i>k-1)   
                cout<<(char)(i%k+'a');
            else  
                cout<<(char)(i+'a');
        }
        cout<<endl;
    }