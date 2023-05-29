#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	int l=t;
	while(t--){
		ll n,i,j,k,s2=0,s=0,p,q;
		ll mx=0,mx2=0;
		cin>>n;
		ll a[n],b[n];
		map<ll,ll>mp,m,m2,mm,mp2;
		vector<ll>v,v2;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(i>0 && a[i]==a[i-1]) mp[a[i]]++;
			if(i>0 && a[i]!=a[i-1]){
				//if(i==n-1) i++;
				if(s<mp[a[i-1]]) {mx=a[i-1];}
				s=max(mp[a[i-1]]+1,s);
				mp2[a[i-1]]=max(mp2[a[i-1]],mp[a[i-1]]+1);
				mp[a[i-1]]=0;
				
			}
			m[a[i]]++;
			if(m[a[i]]==1) {
				mm[a[i]]++;
				v.push_back(a[i]);
			}
		}
		if(s<mp[a[n-1]]) {mx=a[n-1];}
		s=max(mp[a[n-1]]+1,s);
		mp2[a[n-1]]=max(mp2[a[n-1]],mp[a[n-1]]+1);
		mp[a[n-1]]=0;
		for(i=0;i<n;i++)cin>>b[i];
		ll x=s,x2=s2;
		for(i=0;i<n;i++){
			if(i>0 && b[i]==b[i-1]) mp[b[i]]++;
			if(i>0 && b[i]!=b[i-1]){
				if(s<mp[b[i-1]]+mp2[b[i-1]]+1) {mx=b[i-1];}
				s=max(mp[b[i-1]]+mp2[b[i-1]]+1,s);
				mp[b[i-1]]=0;
				//cout<<b[i-1]<<" "<<s<<endl;
			}
			m2[b[i]]++;	
			if(m2[b[i]]==1) mm[b[i]]++;	
			mx2=max(mx2,mm[b[i]]);
			
		}
		if(s<mp[b[n-1]]+mp2[b[n-1]]+1) {mx=b[n-1];}
		s=max(mp[b[n-1]]+mp2[b[n-1]]+1,s);
		//cout<<s<<" "<<m2[mx]<<" "<<m[mx]<<" "<<mx<<endl;
		if(s==0){
			cout<<mx2<<"\n";
			//continue;
		}
		else cout<<s<<"\n";
		
	}
	return 0;
}