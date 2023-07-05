#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e7+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
vector<ll>v;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,i,j;
    cin>>n>>m;
    char a[n][m];
    ll arr[n][m],b[m]={0};
    //for(i=0;i<m;i++) b[i]=1;
    for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		cin>>a[i][j];		
			if(i==0 || j==0) continue;
			else if(a[i][j-1]=='X' && a[i-1][j]=='X'){b[j]=1;}
			//else arr[i][j]=min(a[i][j-1],a[i-1][j]);
    			//if(i>0 && j>0 && arr[i][j-1]==0 && a[i][j]=='.' && b[j]==1) b[j]=0;
    	}
    }
    for(i=1;i<m;i++){
    	//cout<<i<<" "<<b[i]<<" ";
    	b[i]+=b[i-1];
    	//cout<<b[i]<<endl;
	}
	ll q;
	cin>>q;
	while(q--){
		ll l,r;
		cin>>l>>r;
		l--;r--;
		//cout<<b[r]<<" "<<b[l]<<endl;
		ll x=b[r]-b[l];
		//if(l>0) x-=b[l-1];
		if(x==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}