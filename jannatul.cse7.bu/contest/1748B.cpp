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
		ll n,m,k=0,i,j=1,s=0,s2=0;
		cin>>n;
		string a;
		cin>>a;
		ll b[10]={0};
		ll ans=0;
		for(i=0;i<n;i++){
			ll mx=0,unq=0;
			for(j=i;j<n;j++){
				ll x=a[j]-'0';
				b[x]++;
				if(b[x]>10) break;
				if(b[x]==1) unq++;
				mx=max(mx,b[x]);
				if(mx<=unq) ans++;
				//cout<<i<<" "<<ans<<" "<<x<<" "<<b[x]<<" "<<mx<<" "<<unq<<endl;
				
			}
			for(j=0;j<10;j++) b[j]=0;
		}
		cout<<ans<<"\n";
	}
	return 0;
}