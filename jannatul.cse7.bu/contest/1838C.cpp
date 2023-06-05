#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=3e5+3;
ll mod=1e9+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	cin>>t;
	ll l=0;
	ll arr[1007]={0};
	for(ll i=2;i*i<=1007;i++){
		if(arr[i]) continue;
		for(ll j=i*i;j<1007;j+=i)arr[j]=1;
	}
	while(t--){
		//cout<<"testcase "<<l++<<endl;
		ll n,i,j,k,s=1,s2=2,z=0,x=0,m;
		cin>>n>>m;
		////cout<<n<<" "<<m<<endl;
		x=n*m;
		ll a[n][m];
		j=0;
		if(arr[n]==0 && arr[m]>0){
			k=1;
			for(i=0;i<n;i++){
				for(j=1;j<=m;j++) a[i][j-1]=i*m+j;
			}
		}
		else{
			for(i=0;i<m;i++){
				z=0;
				if(j>=x) j=n;			
			    k=0;
				for(j=j+1;z<n;j++) {z++;a[k++][i]=j;}
				j+=n-1;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++) cout<<a[i][j]<<" ";
			cout<<"\n";
		}
		cout<<"\n";
		
	}
	return 0;
}