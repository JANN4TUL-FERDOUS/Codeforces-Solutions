#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=3e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k,i,j=0,s=0,s2=0;
		cin>>n;
		map<ll,ll>mp;
		ll ans=0,a[n],mx=0,x=0;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==0){
				if(s)ans+=mx;
				else ans+=mp[0];
				s=1;
				mx=0;
				mp.clear();
			}
			x+=a[i];
			mp[x]++;
			mx=max(mx,mp[x]);
			//cout<<x<<" "<<a[i]<<" ";
		}
		if(s)ans+=mx;
		else ans+=mp[0];
		cout<<ans<<endl;
	}
	return 0;
}