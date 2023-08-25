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

ll b[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
    	ll n,i,j,m,k,z=0,s=0,z2=0,ans=0;
    	cin>>n>>m;
    	char a[n][m];
		
    	for(i=0;i<n;i++) {
    		for(j=0;j<m;j++) cin>>a[i][j];
    	}
    	for(i=m-1;i>=0;i--){
    		for(j=n-1;j>=0;j--){
    			if(s==0 && a[j][i]=='a') {s++;break;}
    			else if(s==1 && a[j][i]=='k'){ s++;break;}
    			else if(s==2 && a[j][i]=='i'){ s++;break;}
    			else if(s==3 && a[j][i]=='v'){ s++;break;}
    			
    		}
    	}
    	if(s==4) cout<<"YES\n";
    	else cout<<"NO\n";
    }
    return 0;
}