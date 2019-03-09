#include<bits/stdc++.h>

using namespace std;


int main() {
    char s[10000];
    int n,k;
    cin>>n>>k;
    cin>>s;

    for(int i =0;i<n;i++) {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]-'A'+'a';
    }
    sort(s,s+n);
    int c=1;
    for(int i = 1; i < n; i++) {
        if(s[i] != s[i-1]) c=1;
        else {
            c++;
            if(c > k) { cout<<"NO"<<endl;
            return 0; }
        }
    }
    cout<<"YES"<<endl;;
return 0;
}