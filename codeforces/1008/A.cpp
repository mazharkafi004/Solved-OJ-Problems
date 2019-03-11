#include <bits/stdc++.h>
using namespace std;

using namespace std;
	int main(){
	    int i;
		string s;
		cin >> s;
	if (s[s.length()-1]=='n'||s[s.length()-1]=='a'||s[s.length()-1]=='o'||s[s.length()-1]=='u'||s[s.length()-1]=='i'||s[s.length()-1]=='e'){
for (i=0;i<s.length();i++){
			if (s[i]!='n'&&s[i]!='a'&&s[i]!='o'&&s[i]!='u'&&s[i]!='i'&&s[i]!= 'e'){
				if (s[i+1]=='a'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='i'||s[i+1]=='e')
				continue;
					else {
			cout <<"no"<< endl;
						return 0;
					}
				}
			}
		}
		else{
			cout <<"no"<< endl;
			return 0;
		}
		cout <<"yes"<< endl;
			return 0;
	}
