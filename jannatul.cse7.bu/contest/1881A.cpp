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
		ll n,m,i,j,ans=-1;
		cin>>n>>m;
		string s,x;
		cin>>x>>s;
		ll l=n;
		while(n<1000){
			n+=n;
			x+=x;			
		}
		for(i=0;i<n;i++){
			if(x[i]==s[0] && i+m<=n){
				ll d=1;
				for(j=0;j<m;j++){
					if(x[i+j]!=s[j]) {d=0;break;}
				}
				if(d==1){
					ll len=i+m;
					ans=0;
					while(l<len){
						ans++;
						l*=2;
					}
					break;
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
	
}