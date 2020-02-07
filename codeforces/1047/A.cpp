#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c,d;
    cin >> a;
    b=1;
    for(int i=1;i<a;i++)
    {
        if(i%3==0) continue;
        for(int j=1;j<a;j++)
        {

            if(j%3==0) continue;

            for(int k=a-1;k>0;k--)
            {
                if(k%3==0) continue;
                if((i+j+k)==a)
                {
                    cout << i << " " << j << " "  << k << " " << endl;
                    return 0;
                }
            }
        }

    }
}
