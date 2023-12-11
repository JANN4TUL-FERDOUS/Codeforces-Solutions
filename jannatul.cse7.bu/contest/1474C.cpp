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
		cin>>n;
		n*=2;
		ll a[n],done=0;
		for(i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n-1;i++){
			s=a[n-1]+a[i];
			multiset<ll>st;
			vector<pair<ll,ll>>v;
			for(j=0;j<n;j++)st.insert(a[j]);
			ll z=0;
			//cout<<s<<" ";
			while(!st.empty()){
				auto x=st.end();
				x--;
				auto x2=st.find(s-*x);
				if(x==x2 || x2==st.end()){z=1;break;}
				v.pb({*x,*x2});
				s=*x;
				st.erase(x);
				st.erase(x2);
			}
			//cout<<i<<" "<<st.size()<<" "<<z<<" "<<s<<endl;
			if(z==0){
				cout<<"YES\n";
				cout<<a[n-1]+a[i]<<"\n";
				for(auto i:v){
					cout<<i.ff<<" "<<i.ss<<endl;
				}
				done=1;
				break;
			}
		}
		if(done==0)cout<<"NO\n";
	}
	return 0;
}