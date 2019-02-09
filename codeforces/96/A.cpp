#include<bits/stdc++.h>
#include<string>


using namespace std;

int main()
{
    string s;
    cin>>s;

    int a=1;
    for (int i=1;i<s.length();i++)
    {
        if (s[i]==s[i-1])
        {
            a += 1;
            if (a==7)
            {
                cout <<"YES"<< endl;
                return 0;
            }
        }
        else
        {
            a=1;
        }
    }

    cout <<"NO"<< endl;
    return 0;
}
