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
    //cin>>t;
    ll tt=t;
    vector<ll>v;
    ll arr[100]={0};
    for(ll i=2;i<50;i++){
    	if(arr[i]) continue;
    	v.pb(i);
    	for(ll j=i*i;j<50;j+=i) arr[j]=1;
    }
    v.pb(4);v.pb(9);v.pb(25);v.pb(49);
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j,k,s=0;
		string str;
		for(i=0;i<(int)v.size();i++){
			cout<<v[i]<<endl;
			cin>>str;
			if(str[0]=='y') s++;
			
		}
		if(s<2) cout<<"prime\n";
		else cout<<"composite\n";
		
	}
	return 0;
}