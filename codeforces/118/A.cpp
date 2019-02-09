
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    char s[105];
    scanf("%s",s);
    for(int i=0; s[i]!='\0'; )
    {
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
        {
            i++;
        }
        else
        {
            if(s[i]>=65&&s[i]<=90)
            {
                s[i]=s[i]+32;
                printf(".%c",s[i]);
            }
            else
            {
                printf(".%c",s[i]);
            }
            i++;
        }
    }
}
