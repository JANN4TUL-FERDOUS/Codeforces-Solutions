#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=2e6+7;
ll mod=998244353;
int ax[8]={0,0,-1,+1,-1,-1,1,1};
int ay[8]={-1,1,0,0,-1,1,-1,1};
int kx[8]={2,2,-2,-2,1,1,-1,-1};
int ky[8]={1,-1,1,-1,2,-2,2,-2};
//const ll len=180;
vector<pair<ll,ll>>v;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
	cin>>t;
   	int tt=t;
    while(t--){
		ll n,m,i,j,ans=0;
		cin>>n;
		string a[n];
		int b[n][n]={0};
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n/2;i++){
			for(j=0;j<n;j++){
				if(a[i][j]==a[n-1-j][i] && a[i][j]==a[j][n-1-i] && a[i][j]==a[n-1-i][n-1-j]) continue;
				//cout<<i<<" "<<j<<" "<<a[i][j]<<" "<<a[n-1-j][i]<<" "<<n-1-j<<" "<<i<<" "<<ans<<endl;
				ll x=a[i][j]-'a';
				ll y=a[n-1-j][i]-'a';
				ll z=a[j][n-1-i]-'a';
				ll z2=a[n-1-i][n-1-j]-'a';
				if(x<y) swap(x,y);
				if(x<z) swap(x,z);
				if(x<z2) swap(x,z2);
				//cout<<x<<" "<<y<<" "<<z<<endl;
				ans+=x-y+x-z+x-z2;
				a[n-1-j][i]='a'+x;
				a[i][j]='a'+x;
				a[j][n-1-i]='a'+x;
				a[n-1-i][n-1-j]='a'+x;
				
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
	
}