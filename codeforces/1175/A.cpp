#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    long long int b,c;
    for(int i=0;i<a;i++)
    {
        long long int count = 0;
        cin>>b>>c;
        while(b>0)
        {
            if(b%c==0)
            {
                b=b/c;
                count++;
            }
            else
            {
                 count = count+(b%c);
                 b=b-(b%c);
            }

        }
        cout<<count<<endl;
    }
}
