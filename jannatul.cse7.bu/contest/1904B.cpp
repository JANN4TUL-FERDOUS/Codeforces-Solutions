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
ll par[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll t;
   	cin>>t;
   	while(t--){
   		ll n,i,j,k,s=0;
   		cin>>n;
   		pair<ll,ll>a[n];
   		ll b[n];
   		for(i=0;i<n;i++){
   			cin>>a[i].ff;
   			a[i].ss=i;
   		}
   		sort(a,a+n);
   		b[a[0].ss]=0;
   		s=a[0].ff;
   		j=0;
   		for(i=1;i<n;i++){
   			while(s<a[i].ff && j<i){
   				b[a[j].ss]=i-1;
   				j++;
   			}
   			s+=a[i].ff;
   			//cout<<i<<" "<<a[i].ff<<" "<<s<<endl;
   		}
   		//cout<<j<<" "<<s<<"\n";
   		while(j<n){
   			b[a[j++].ss]=n-1;
   		}
   		for(i=0;i<n;i++) cout<<b[i]<<" ";
   		cout<<"\n";
   	}
	return 0;
}