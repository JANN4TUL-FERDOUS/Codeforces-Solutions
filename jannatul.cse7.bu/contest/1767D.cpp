#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 const ll N=1e6+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
    	ll i,n,m,k,j,s=0;
    	cin>>n;
    	string a;
    	cin>>a;
    	for(i=0;i<n;i++){
    		if(a[i]=='1') s++;
    	}
    	ll len=(1<<n)-(1<<(n-s))+1;
    	//cout<<len<<" "<<s<<" "<<(1<<s)<<endl;
    	for(i=1<<s;i<=len;i++) cout<<i<<" ";
    	cout<<"\n";
	}
	return 0;
}