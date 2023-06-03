#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=3e5+3;
ll mod=1e9+7;
ll dp[N][107];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		ll n,i,j,s=0,s2=0,z=0,k=0,x=0,z2=0,mx=0,mx2=0;
		cin>>n;
		string a;
		cin>>a;
		map<char,ll>mp,mp2;
		vector<char>v;
		if(n%2) {cout<<"-1\n";continue;}
		for(i=0;i<n;i++){
			mp[a[i]]++;
			mx=max(mx,mp[a[i]]);
			if(a[n-1-i]==a[i] && i<n/2){
				k++;
				v.push_back(a[i]);
				mp2[a[i]]++;
				if(mp2[a[i]]==1) z2++;
				mx2=max(mx2,mp2[a[i]]);
			}
		}
		//cout<<z<<" "<<z2<<" "<<k<<endl;
		if(n%2|| mx*2>n) cout<<"-1\n";
		else if(z==n || k==0) cout<<"0\n";
		else{
			if(mx2*2>k) cout<<mx2<<"\n";
			else cout<<(k+1)/2<<"\n";
		}
		
	}
	return 0;
}