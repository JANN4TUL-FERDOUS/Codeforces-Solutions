#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const ll N=2e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
    	ll n,i,j=0,s=0,k;
    	string a;
    	cin>>a>>k;
		n=a.length();
		ll len=n,l=n;
		while(k>l){
			k-=l;l--;j++;
		}
		map<char,int>mp;
		l=0;
		vector<char>v;
		for(i=0;i<n;i++){
			if(i==0 || j==0 || a[i]>=v.back()){
				v.pb(a[i]);
				if(v.size()>=k && j<=0) {break;}
			}
			else{
				while(j>0 && !v.empty() && a[i]<v.back()){
					v.pop_back();
					j--;
				}
				v.pb(a[i]);
			}
		}	
		cout<<v[k-1];
    }
    return 0;
}