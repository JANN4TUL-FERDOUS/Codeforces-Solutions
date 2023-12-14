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
string a[1000];
ll ans=0,n,m;
void fn(ll i,ll j){
	if(i<0 || i>=n || j<0 || j>=m) return;
	if(i>0 && a[i-1][j]=='B') return;
	if(i<n-1 && a[i+1][j]=='B') return;
	if(j>0 && a[i][j-1]=='B') return;
	if(j<m-1 && a[i][j+1]=='B') return;
	if(a[i][j]=='#') return ;
	if(a[i][j]=='G') ans++;
	a[i][j]='#';
	for(ll k=0;k<4;k++) fn(i+ax[k],j+ay[k]);
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll t=1;
   	cin>>t;
   	while(t--){
   		ll i,j,k,s=0;
   		cin>>n>>m;
   		ll g=0,b=0;
   		ans=0;
   		//string a[n];
   		for(i=0;i<n;i++){
   			cin>>a[i];
   			for(j=0;j<m;j++){
   				if(a[i][j]=='G') g++;
   				else if(a[i][j]=='B') b++;
   			}
   		}
   		fn(n-1,m-1);
   		if(g==ans) cout<<"YES\n";
   		else cout<<"NO\n";   		
	}
	return 0;
}