#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+7;
const ll mod=998244353;
//ll dp[N][N];
ll a[N];
void seive(){
	ll i,j;
	for(i=2;i<N;i++) a[i]=i;
	for(i=2;i*i<N;i++){
		if(a[i]!=i) continue;
		for(j=i*i;j<N;j+=i) a[j]=min(a[j],i);
	}
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    seive();
    cin>>t;
    while(t--){
    	ll n,i,j,s=0,m;
    	cin>>n>>m;
    	if(m>1 && n>1 && m>=a[n]) cout<<"NO\n";
    	else cout<<"YES\n";
	}
	return 0;
}