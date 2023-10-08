#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=2e5+7;
ll mod=998244353;
int ax[8]={0,0,-1,+1,-1,-1,1,1};
int ay[8]={-1,1,0,0,-1,1,-1,1};
int kx[8]={2,2,-2,-2,1,1,-1,-1};
int ky[8]={1,-1,1,-1,2,-2,2,-2};
//const ll len=180;
vector<ll>g[N];
ll fact[N];
 
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,i,j,s=0,s2=0,z=1,z2=0,x=0;
		//cin>>n;
		string a;
		cin>>a;
		n=a.length();
		vector<ll>v;
		ll ans=1;
		s=1;
		for(i=1;i<n;i++){
			if(a[i]==a[i-1]){
				s++;
			}
			else{
				z2+=s-1;
				ans=(ans*s)%mod;
				s=1;
			}
		}
		z2+=s-1;
		ans=(ans*s)%mod;
		for(i=1;i<=z2;i++)ans=(ans*i)%mod;
		cout<<z2<<" "<<ans<<"\n";
	}
	return 0;
}