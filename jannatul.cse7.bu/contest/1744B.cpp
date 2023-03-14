#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int l=t;
	while(t--){
        long long n,i,j,s=0,k,s2=0,x=0,x2=0;
        cin>>n>>k;
        int a[n];
        map<char,int>m;
        for(i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]%2) s++;
            else s2++;
            x+=a[i];
        }
        while(k--){
            long long m,m2,y;
            cin>>y>>m;
            if(y==0) {
            	x+=s2*m;
            	if(m%2) {s+=s2;s2=0;}
            }
            else {
            	x+=s*m;
            	if(m%2) {s2+=s;s=0;}
            }
            cout<<x<<endl;
        }
	}
	return 0;
}