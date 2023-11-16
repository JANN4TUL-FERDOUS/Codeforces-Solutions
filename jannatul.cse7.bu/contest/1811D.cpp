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
ll fn[50];
ll check(ll n,ll x,ll y){
	if(n==1) return 1;
	if(min(y,fn[n+1]-y+1)>fn[n-1]) return 0;
	return check(n-1,min(y,fn[n+1]-y+1),x);

}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    fn[0]=fn[1]=1;
    for(ll i=2;i<=50;i++) fn[i]=fn[i-1]+fn[i-2];
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k,i,j=0,s=0,s2=0;
		ll x,y;
		cin>>n>>x>>y;
		if(check(n,x,y)) cout<<"YES\n";
		else cout<<"NO\n";		
	}
	return 0;
}