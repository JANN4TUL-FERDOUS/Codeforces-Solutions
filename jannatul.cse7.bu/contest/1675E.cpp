#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ff first
#define ss second
#define pb push_back
 
const int N=3e5+7;
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
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j,k,s=0;
		cin>>n>>k;
		string a;
		cin>>a;
		ll mn='a';
		ll bt[26]={0};
		for(i=0;i<n;i++){
			ll x=a[i]-'a';
			while(x){
				if(bt[x])x--;
				else if(k>0){
					bt[x]=1;
					x--;k--;
				}
				else break;
			}
			a[i]=x+'a';
		}
		for(i=0;i<n;i++) cout<<a[i];
		cout<<"\n";
	}
	return 0;
}