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

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,k,z=1,s=0,s2=0;
    	string a;
    	cin>>a;
    	for(i=0;i<a.length();i++){
    		if(i%2==0) s=s*10+a[i]-'0';
    		else s2=s2*10+a[i]-'0';
    	}
    	//cout<<s<<" "<<s2<<endl;
    	if(s2==0) cout<<s-1<<"\n";
    	else cout<<(s+1)*(s2+1)-2<<"\n";
    }
    return 0;
}