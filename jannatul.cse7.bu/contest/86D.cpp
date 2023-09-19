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
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
ll len=450;
vector<ll>v(N);
const ll N2=1e6+7;
ll a[N],mp[N2];
struct query{
	ll l,r,id;
}q[N];
bool cmp(query a,query b){
	if(a.l/len==b.l/len) return a.r>b.r;
	else return a.l<b.l;
}int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,i,j,s=1e17,s2=0,z=0;
		cin>>n>>m;
		for(i=1;i<=n;i++) cin>>a[i];
		a[0]=0;
		for(i=0;i<m;i++) {
			cin>>q[i].l>>q[i].r;
			q[i].id=i;
			q[i].l--;
		}
		sort(q,q+m,cmp);
		ll sum=0,cl=0,cr=0;
		for(i=0;i<m;i++){
			//cout<<cl<<" "<<cr<<" "<<q[i].l<<" "<<q[i].r<<endl;
			while(cr<q[i].r){
				cr++;
				ll x=a[cr];
				sum-=x*mp[x]*mp[x];
				mp[x]++;
				sum+=x*mp[x]*mp[x];
			}//cout<<"1-"<<sum<<endl;
			while(cr>q[i].r){
				ll x=a[cr];
				sum-=x*mp[x]*mp[x];
				mp[x]--;
				sum+=x*mp[x]*mp[x];
				cr--;
			}//cout<<"2-"<<sum<<endl;
			while(cl<q[i].l){
				cl++;
				ll x=a[cl];
				sum-=x*mp[x]*mp[x];
				mp[x]--;
				sum+=x*mp[x]*mp[x];
				//cl++;
			}//cout<<"3-"<<sum<<endl;
			while(cl>q[i].l){
				ll x=a[cl];
				sum-=x*mp[x]*mp[x];
				mp[x]++;
				sum+=x*mp[x]*mp[x];
				cl--;
			}//cout<<"4-"<<sum<<endl;
			//cout<<"ID "<<q[i].id<<" "<<sum<<endl;
			v[q[i].id]=sum;
		}
		for(i=0;i<m;i++) cout<<v[i]<<"\n";
	}
	return 0;
}