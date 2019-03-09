#include<bits/stdc++.h>

 using namespace std;

int main() {

    string str;
    int n,b=0;
    cin>>n;
        cin >> str;

        for (int i =0;i<n;i++) {
            if (str[i]=='1') {
                b++;
            }
            else {
                cout <<b;
                b=0;
            }
        }
        cout <<b<< endl;
    }
