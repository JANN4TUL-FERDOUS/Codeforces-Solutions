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
ll arr[N];
vector<ll>g[N];
ll ans=0,res;

void seive(){
	ll i,j;
	arr[1]=1;
	for(i=2;i*i<N;i++){
		if(arr[i]=1) continue;
		for(j=i*i;j<N;j+=i) arr[j]=1;
	}
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,k,z=0;
    	cin>>n;
    	i=2;
    	while(i<=n){ cout<<i<<" ";i+=2;}
    	i=1;
    	while(i<=n) {
    		if(i!=3) cout<<i<<" ";
    		i+=2;
		}
    	if(n>=3) cout<<3;
    	cout<<endl;
    }
    return 0;
}