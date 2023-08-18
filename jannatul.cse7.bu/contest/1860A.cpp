#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=2e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
vector<ll>g[N];
ll a[N],b[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,m,i,j,s=0,z=0;
		string a;
		cin>>a;
		n=a.length();
		if(n==2 && a[0]=='(' && a[1]==')') cout<<"NO\n";
		else{
			cout<<"YES\n";
			for(i=1;i<n;i++){
				if(a[i]==a[i-1]) s++;
			}
			if(s==0){
				for(i=0;i<n;i++) cout<<"(";
				for(i=0;i<n;i++) cout<<")";
				cout<<endl;
			}
			else{
				for(i=0;i<n;i++) cout<<"()";
				cout<<endl;
			}
		}
	}
    return 0;
}