#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=2e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
vector<ll>v;
ll a[N],b[N],n;

bool fn(ll mid){
	ll i,s=0;
	for(i=0;i<n;i++){
		if(mid-s-1<=a[i] && s<=b[i])s++;
	}
	return s>=mid;
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll m,i,j,s=0,s2=0,z=0;
		cin>>n;
		for(i=0;i<n;i++)cin>>a[i]>>b[i];
		//for(i=0;i<n;i++) cin>>b[i];
		ll l=1,r=n;
		while(l<=r){
			ll mid=(l+r)/2;
			if(fn(mid)){
				s=mid;l=mid+1;
			}
			else r=mid-1;
		}
		cout<<s<<"\n";
	}
	return 0;
}