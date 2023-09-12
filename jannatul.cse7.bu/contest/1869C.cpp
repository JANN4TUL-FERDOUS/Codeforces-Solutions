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
		cin>>n>>m;
		ll arr[n][m];
		if(m==1){
			for(i=0;i<=n;i++) cout<<"0\n";
			continue;
		}
		if(n==1){
			cout<<"2"<<"\n";
			for(i=0;i<m;i++) cout<<i<<" ";
			cout<<endl;
			continue;
		}
		z=min(n+1,m);
		cout<<z<<"\n";
		for(i=0;i<n;i++){
			//s=(z-i)%z;
			for(j=0;j<m;j++){
				if(i>=z-1) cout<<j<<" ";
				else cout<<(i+j)%m<<" ";
			}
			cout<<"\n";
		}
		
	}
	return 0;
}