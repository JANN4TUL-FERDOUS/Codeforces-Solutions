#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=5e5+7;
ll mod=1e9+7;
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
		ll n,m,i,j,z=0;
		cin>>n;
		string a;
		cin>>a;
		map<char,ll>mp,mp2;
		for(i=0;i<n;i++){
			mp[a[i]]++;
		}
		for(char ch='A';ch<='Z';ch++){
			if(mp[ch]>=ch-'A'+1)z++;
		}
		cout<<z<<"\n";
	}
	return 0;
}