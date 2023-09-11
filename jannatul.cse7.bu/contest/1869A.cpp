#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
ll back[N+1],frow[N+1];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		ll n,m,k,i,j=-1,s=0,s2=0,z=0,z2=0;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++) cin>>a[i];
		if(n%2==0){
			cout<<"2\n";
			cout<<"1 "<<n<<"\n";
			cout<<"1 "<<n<<"\n";
		}
		else{
			cout<<"4\n";
			cout<<"1 "<<n-1<<endl;
			cout<<"1 "<<n-1<<endl;
			cout<<n-1<<" "<<n<<"\n";
			cout<<n-1<<" "<<n<<"\n";
		}
	}
	return 0;
}