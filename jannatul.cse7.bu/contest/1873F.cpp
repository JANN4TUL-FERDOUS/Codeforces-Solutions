#include <bits/stdc++.h>
using namespace std;
#define ll  long long
const int N=2e5+7;
ll a[N],n,m,ans=0,h[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	cin>>t;
	ll tt=t;
	while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll i,j=0,s=0,k,res=0;
		cin>>n>>k;
		for(i=0;i<n;i++) {cin>>a[i];if(a[i]<=k) res=1;}
		j=-1;
		ll x=0,prev=-1;
		for(i=0;i<n;i++)cin>>h[i];
		for(i=0;i<n-1;i++){
			if(h[i]%h[i+1]==0){
				if(x+a[i]<=k){
					x+=a[i];
					s=max(s,i-j);
					prev=1;
				}
				else{
					if(a[i]>k){prev=0;j=i;x=0;continue;}
					while(a[i]+x>k && j<i-1){
						x-=a[j+1];
						j++;
						//s=max(s,i-j);
						//cout<<")"<<" "<<i<<" "<<j<<" "<<x<<endl;
					}
					x+=a[i];
					if(x>k) {j=i;x=0;prev=0;}
					if(x>k && a[i]<=k) {j=i-1;prev=1;x=a[i];}
					
					
				}
			}
			else {
				if(prev==1 && x+a[i]<=k)s=max(s,i-j);
				x=0;prev=0;j=i;
			}
			//cout<<i<<" "<<j<<" "<<" "<<s<<" "<<x<<endl;
		}
		//cout<<prev<<" "<<j<<endl;
		if(prev==1 && x+a[n-1]<=k){s=max(s,n-1-j);}
		cout<<max(s,res)<<"\n";
	}
	return 0;
}