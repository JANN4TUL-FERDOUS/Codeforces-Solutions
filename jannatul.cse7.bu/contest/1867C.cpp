#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
ll back[N+1],frow[N+1];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		ll n,m,k,i,j=-1,s=0,s2=0,s3=0,z=0,z2=0;
		cin>>n;
		ll a[n];
		set<ll>st;
		for(i=0;i<=n;i++) st.insert(i);
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<=n) st.erase(a[i]);
		}
		j=0;
		while(!st.empty() && j<=2*n+1){
			ll x=*st.begin();
			st.erase(x);
			cout<<x<<endl;
			j++;
			//if(j==2*n+1) break;
			cin>>z;
			if(z==-1) break;
			if(z<=n) st.insert(z);
			j++;
		}//cout<<tt-t<<" ";
	}
	return 0;
}