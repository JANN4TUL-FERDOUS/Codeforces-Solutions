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
ll sv[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll  n,m,i,j,k,s=0;
		cin>>n;
		string a;
		char ch;
		ll l=-2e9,r=2e9;
		ll num;
		for(i=0;i<n;i++){
			cin>>a>>num>>ch;
			if(a[0]=='>'){
				if(ch=='N'){
					if(a.length()==2) num--;
					if(num<l) s=1;
					r=min(r,num);					
					continue;
				}
				if(a.length()==1) num++;
				if(num>r) s=1;
				l=max(l,num);
			}
			if(a[0]=='<'){
				if(ch=='N'){
					if(a.length()==2) num++;
					if(num>r) s=1;
					l=max(l,num);					
					continue;
				}
				if(a.length()==1) num--;
				if(num<l) s=1;
				r=min(r,num);
			}
		}
		if(s==1) cout<<"Impossible\n";
		else cout<<l<<"\n";		
	}
	return 0;
}