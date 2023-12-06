#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ff first
#define ss second
#define pb push_back
 
const int N=5e5+7;
ll mod=998244353;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1; 
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j=0,k,s=0;
		cin>>n>>k;
		string a;
		cin>>a;
		for(i=n-1;i>=0;i--){
			if(a[i]=='1'){
				if(n-i-1<=k){
					swap(a[i],a[n-1]);
					k-=n-i-1;
				}
				break;
			}
		}
		for(i=0;i<n-1;i++){
			if(a[i]=='1'){
				if(k>=i){
					swap(a[i],a[0]);
				}
				break;
			}
		}
		ll ans=0;
		for(i=1;i<n;i++){
			//cout<<i<<" "<<a[i]<<" ";
			s=a[i-1]-'0';
			s*=10;
			s+=a[i]-'0';
			ans+=s;
		}
		cout<<ans<<"\n";
	}
	return 0;
}