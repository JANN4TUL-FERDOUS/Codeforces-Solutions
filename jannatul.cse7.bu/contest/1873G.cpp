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
const ll len=180;
vector<ll>v[len];
ll a[N],ln;
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,i,j,s=1e9,s2=0,z=0;
		string a;
		cin>>a;
		a+='B';
		n=a.length();
		s=n;
		for(i=0,j=0;i<n;i++){
			if(a[i]=='B'){
				s=min(s,i-j);
				j=i+1;
			}
			else if(a[i]=='A'){
				s2++;
			}
		}
		
		//cout<<z<<" "<<s<<" "<<s2<<" ";
		cout<<s2-s<<"\n";
	}
	return 0;
}