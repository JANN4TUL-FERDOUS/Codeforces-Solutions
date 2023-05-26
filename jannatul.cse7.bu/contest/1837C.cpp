#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
const int N=3e5+3;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	int l=t;
	while(t--){
		ll n,i,j,s=1,s2=0;
		string a;
		cin>>a;
		char c='1';
		n=a.length();
		s2=1;
		i=n-1;
		if(a[n-1]=='?'){
			if(n==1) a[0]=c;
			else{
				for(i=n-2;i>=0;i--){
					if(a[i]=='?') continue;
					else{
						c=a[i];break;
					}
				}
				for(j=i+1;j<n;j++) a[j]=c;
			}
		}
		for(;i>=0;i--){
			if(a[i]=='?') a[i]=c;
			else c=a[i];
		}
		for(i=0;i<n;i++) cout<<a[i];
		cout<<"\n";
	 }
	 return 0;
 }