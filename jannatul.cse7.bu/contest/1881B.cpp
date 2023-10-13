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
		ll n,m,i,sum=0;
		ll a[3];
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		if(a[1]%a[0]==0 && a[2]%a[0]==0){
			sum=a[1]/a[0]+a[2]/a[0]-2;
			if(sum<=3) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else cout<<"NO\n";
	}
	
	return 0;
}