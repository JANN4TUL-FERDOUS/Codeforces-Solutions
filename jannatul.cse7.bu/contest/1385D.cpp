#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=2e6+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
vector<ll>g[N];
string str;

ll solve(ll l,ll r,char ch){
	//cout<<l<<" "<<r<<" "<<ch<<endl;
	if(r==l) return str[r]!=ch;
	ll mid=(l+r)/2;
	ll s=0,s2=0;
	for(ll i=l;i<=mid;i++){
		if(str[i]!=ch) s++;
	}
	for(ll i=mid+1;i<=r;i++){
		if(str[i]!=ch) s2++;
	}
	s+=solve(mid+1,r,ch+1);
	s2+=solve(l,mid,ch+1);
	return min(s,s2);
}

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,s=0;
    	cin>>n;
    	cin>>str;
    	cout<<solve(0,n-1,'a')<<"\n";

    }
    return 0;
}