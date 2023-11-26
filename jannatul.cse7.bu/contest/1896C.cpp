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
		ll  n,m,i,j,k,s=0;
		cin>>n>>k;
		ll b[n],c[n],l,r;
		ll bt[n]={0};
		pair<ll,ll>a[n];
		for(i=0;i<n;i++){cin>>a[i].ff;a[i].ss=i;};
		for(i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		s=0;
		for(i=0;i<n;i++){
			c[a[i].ss]=b[(i+k)%n];
		}
		for(i=0;i<n;i++){
			if(a[i].ff>c[a[i].ss]) s++;
		}
		//cout<<s<<" ";
		if(s==k) {
			cout<<"YES\n";
			for(i=0;i<n;i++) cout<<c[i]<<" ";
			cout<<"\n";
		}
		else cout<<"NO\n";
	}
	return 0;
}