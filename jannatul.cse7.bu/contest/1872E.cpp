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

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(tt--){
		ll n,k,i,j=-1,s=0,s2=0,z=1;
		cin>>n;
		ll a[n],b[n+1];
		b[0]=0;
		for(i=0;i<n;i++) cin>>a[i];
		string str;
		cin>>str;
		for(i=0;i<n;i++){
			if(str[i]=='1') s^=a[i];
			b[i+1]=b[i]^a[i];
		}
		ll q;
		cin>>q;
		while(q--){
			ll x,l,r;
			cin>>x>>l;
			if(x==1){
				cin>>r;
				s^=b[r]^b[l-1];
			}
			else {
				if(l==1) cout<<s<<" ";
				else cout<<(s^b[n])<<" ";
			}
		}	
		cout<<"\n";		
   }
   return 0;
}