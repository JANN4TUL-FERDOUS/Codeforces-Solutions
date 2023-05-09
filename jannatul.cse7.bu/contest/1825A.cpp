#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+7;
ll a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,i,j,s=0,s2=0,z=1;
		string a;
		cin>>a;
		for(i=0;i<a.length();i++){
			if(i>0 && a[i]==a[i-1]) z++;
		}
		ll l=a.length();
		for(i=0;i<a.length()/2;i++){
			if(a[i]!=a[l-i-1]) {s=1;break;}
		}
		if(s==1) cout<<l<<"\n";
		else if(z==l) cout<<"-1\n";
		else cout<<l-1<<"\n";
		
	}
	return 0;	
}