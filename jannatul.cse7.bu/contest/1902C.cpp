#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ff first
#define ss second
#define pb push_back
 
const int N=5e5+7;
ll mod=998244353;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j=0,k,s=0;
		cin>>n;
		ll a[n];
		map<ll,ll>mp;
		vector<ll>v;
		for(i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		sort(a,a+n);
		if(a[0]==a[n-1]) {cout<<"1\n";continue;}
		ll gcd=1;
		for(i=0;i<n-1;i++){
			v.pb(a[n-1]-a[i]);
			s+=a[n-1]-a[i];
			if(i){
				gcd=__gcd(gcd,v[i]);
			}
			else gcd=v[i];
		}
		ll ans=s/gcd+n*gcd;
		for(i=a[n-1]-gcd;;i-=gcd){
			if(j>n) break;
			if(mp[i]==0) {ans=min(ans,s/gcd+(a[n-1]-i)/gcd);break;}
		}
		cout<<ans<<"\n";
	}
	return 0;
}