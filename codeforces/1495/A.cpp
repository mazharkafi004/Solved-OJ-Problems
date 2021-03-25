#include<bits/stdc++.h>

using namespace std;

main() {
long long t;
cin>>t;
while(t--) {
    double s=0;
    long long n,a,b;
    cin>>n;
    vector<double>p,q;
    for(long long i=0;i<n*2;i++) {
        cin>>a>>b;

        if(a==0) {
            p.push_back(b*b);
        }
      if(b==0){
            q.push_back(a*a);
        }
    }
    sort(p.begin(),p.end());
    sort(q.begin(),q.end());
//     vector<double>::iterator it;
//	 for(it=p.begin();it!=p.end();it++) {
//           cout<<*it<<" ";
//	}
//	cout<<endl;
//	for(it=q.begin();it!=q.end();it++) {
//           cout<<*it<<" ";
//	}
//	cout<<endl;

 for(double i=0;i<n;i++) {
    s+=sqrt(p[i]+q[i]);
 }
printf("%.15lf\n",s);

}

}
