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

ll b[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
    	ll n,i,j,m,k,z=0,s=0,z2=0,ans=0;
    	cin>>n>>k;
    	string a;
    	cin>>a;
    	if(k%2==0){
    		if(k%2==0)sort(a.begin(),a.end());
    		for(i=0;i<n;i++) cout<<a[i];
    		cout<<"\n";
    		continue;
    	}
    	vector<char>v,v2;
    	for(i=0;i<n;i++){
    		if(i%2) v.pb(a[i]);
    		else v2.pb(a[i]);
    	}
    	//cout<<v.size()<<" "<<v2.size()<<endl;
    	if(n>1)sort(v.begin(),v.end());
    	sort(v2.begin(),v2.end());
    	for(i=0;i<n;i++){
    		if(i%2==0) cout<<v2[i/2];
    		else cout<<v[i/2];    		
    	}
    	cout<<"\n";
    }
    return 0;
}