#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=3e5+7;
ll mod=998244353;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
const ll len=180;
ll a[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k,i,j=0,s=0,s2=0,z=0,x,y;
		cin>>n>>m>>k;
		ll a[n],b[m];
		for(i=0;i<n;i++) {cin>>a[i];s+=a[i];}
		for(i=0;i<m;i++) {cin>>b[i];}
		sort(a,a+n);
		sort(b,b+m);
		if(k%2==1){
			if(b[m-1]>a[0]){
				s-=a[0];
				s+=b[m-1];
			}
		}
		else{
			if(a[0]<b[m-1]){
				s-=a[0];
				s+=b[m-1];
				swap(a[0],b[m-1]);
			}
			sort(a,a+n);
			sort(b,b+m);
			if(b[0]<a[n-1]){
				s+=b[0];
				s-=a[n-1];
			}
			
		}
		cout<<s<<"\n";
		
	}
	return 0;
}