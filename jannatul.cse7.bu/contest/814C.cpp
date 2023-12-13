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
ll par[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll t=1;
   //	cin>>t;
   	while(t--){
   		ll n,i,j,k,s=0,mn=1e18;
   		cin>>n;
   		string a;
   		cin>>a;
   		ll q;cin>>q;
   		while(q--){
   			char ch;
   			cin>>k>>ch;
   			ll l=0,r=-1;
   			ll ans=0;
   			while(r<n-1){
   				r++;
   				if(a[r]!=ch) k--;
   				while(k<0) {
   					if(a[l]!=ch) k++;
   					l++;
				}
				ans=max(ans,r-l+1);
   			}
   			cout<<ans<<"\n";
   		}
	}
	return 0;
}