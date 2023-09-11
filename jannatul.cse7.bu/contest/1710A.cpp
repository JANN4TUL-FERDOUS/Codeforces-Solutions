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
		ll n,m,k,i,j=-1,s=0,s2=0,z=0,z2=0;
		cin>>n>>m>>k;
		ll a[k];
		for(i=0;i<k;i++){
			cin>>a[i];
			if(a[i]/n>2) z++;
			if(a[i]/m>2) z2++;
			if(a[i]/n>=2)s+=a[i]/n;
			if(a[i]/m>=2)s2+=a[i]/m;
		}
		if((s>=m && (m%2==0 || z)) || (s2>=n && (n%2==0 || z2))) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}