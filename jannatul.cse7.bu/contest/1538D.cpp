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
bitset<N>bt;
ll arr[N],ans[N],cost[N];
vector<ll>g[N];
vector<ll>prim;

ll div(ll a){
	ll num=0;
	for(ll i:prim){
		while(a%i==0){
			num++;a/=i;
		}
	}
	ll len=prim.size();
	if(prim[len-1]<a) num++;
	return num;
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    ll l=32000;
    for(ll i=2;i<l;i++){
    	if(arr[i]) continue;
    	prim.pb(i);
    	for(ll j=i*i;j<l;j+=i) arr[j]=1;
    }
    while(t--){
    	ll n,i,j,s=0,z=0,a,b,k;
    	cin>>a>>b>>k;
    	s=div(a)+div(b);
    	if(k==1 && a==b) {cout<<"NO\n";continue;}
    	ll gcd=__gcd(a,b);
    	if(gcd==a || gcd==b) z=1;
    	else z=2;
    	if(a==b) z=0;
    	//cout<<div(a)<<" "<<div(b)<<" "<<s<<" "<<z<<" "<<gcd<<endl;
    	if(k>=z && k<=s) cout<<"YES\n";
    	else cout<<"NO\n";
    	
    }
    return 0;
}