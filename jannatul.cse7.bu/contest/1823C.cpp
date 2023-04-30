#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+7;
ll b[N];
void seive(){
	ll i,j,s=0;
	for(i=1;i<N;i++) b[i]=i;
	for(i=2;i*i<N;i++){
		if(b[i]!=i) continue;
		for(j=i*i;j<N;j+=i) b[j]=min(b[j],i);
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	seive();
	while(t--){
		ll i,n,j,k,s=0,s2=0,z=0,s3=0,z2=0,res=0;
		cin>>n;
		ll a[n];
		vector<ll>v;
		map<ll,ll>m;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(b[a[i]]==a[i]){
				if(a[i]==1) z++;
				else if(m[a[i]]==0 ) z2++;				
			}
			ll x=b[a[i]],x2=a[i];
			while(x2%x==0){
				m[x]++;
				if(m[x]==1) v.push_back(x);
				x2/=x;
				x=b[x2];
				if(x2==1) break;
			}
		}
		if(z+z2==n && z2<=2) cout<<"0\n";
		else{
			ll l=v.size();
			//cout<<l<<endl;
			for(i=0;i<l;i++){
				z=m[v[i]];
				//cout<<z<<" ";
				if(z>1)s+=z/2;
				if(v[i]>1 &&( z%2 || z==1)) s3++;			
			}
			cout<<s+s3/3<<endl;
		}
	}
	return 0;	
}