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
		cin>>n;
		char a[n];
		
		ll ans=0,pos=0;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]=='B') {pos=i;s=0;}
		}
		//cout<<pos<<" "<<s<<endl;
		for(i=n-1;i>=0;i--){
			if(a[i]=='A'){
				//cout<<i<<" "<<pos<<" "<<ans<<endl;
				if(pos>i){ans+=s;s=1;pos=i;}
			}
			else {pos=i;s++;}
		}
		cout<<ans<<"\n";
	}
	return 0;
}