#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);	
	int t;
	cin>>t;
	while(t--){
		ll i,j,s=0,s2=0,n,m,z=0,z2=0,res=0;
		cin>>n>>m;
		ll a[n+1],b[m+1]={0};
		vector<ll>v,v2;
		map<ll,ll>mp,mp2;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==-1) s++;
			else if(a[i]==-2) s2++;
			else {
				
				mp[a[i]]++;
				if(mp[a[i]]==1){
					res++;
					v.push_back(a[i]);
				}
			}				
		}
		sort(v.begin(),v.end());
		ll l=v.size();
		z=0,z2=0;
		ll x=0;
		//cout<<res<<" "<<l<<" "<<s<<" "<<s2<<endl;
		for(i=0;i<l;i++){
			
			if(s>0){
				
				if(v[i]>s) z=min(s+i,v[i]-1);
				else z=v[i]-1;
			}
			if(s2>0){
				
				if(m-v[i]>s2) z2=min(s2+l-i-1,m-v[i]);
				else z2=m-v[i];
			}
			//cout<<x<<" "<<z<<" "<<z2<<" "<<v[i]<<endl;
			 x=max(x,z+z2+1);
		}
		if(l==0) cout<<min(m,max(s,s2))<<endl;
		else cout<<max(x,max(min(res+s,m),min(res+s2,m)))<<"\n";
	}
	return 0;
}