#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int nn=1e5+7;
ll a[nn];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
	while(t--){
		ll q,k,n,i,j,z=0,s=0,s2=0,z2=0;
		cin>>n>>q;
		map<ll,pair<ll,int>>m;
		map<ll,pair<ll,ll>>mp;
		for(i=0;i<n;i++)cin>>a[i];
		if(a[0]>a[1]){m[1]={a[0],1};mp[a[0]].first=1;}
		else m[1]={a[0],0};
		for(i=1;i<n;i++){
			if(a[i]<a[0]){
				m[i+1]={a[i],0};
				mp[a[0]].second=i;
			}
			else{
				m[i+1]={a[i],1};
				mp[a[i]].first=i;
				mp[a[i]].second=i;
				a[0]=a[i];
			}
			//cout<<a[0]<<" "<<mp[a[0]].first<<" "<<mp[a[0]].second<<endl;		
		}
		mp[a[0]].second=n;
		while(q--){
			cin>>i>>k;
			//cout<<m[i].second<<" "<<m[i].first<<" "<<mp[m[i].first].first<<" "<<mp[m[i].first].second<<"\n";
			if(m[i].second==0) cout<<"0\n";
			else{
				//cout<<m[i].first<<" "<<mp[m[i].first].first<<" "<<mp[m[i].first].second<<endl;
				if(m[i].first==a[0]){
					s=max(0ll,k-mp[m[i].first].first+1);
					cout<<s<<endl;
				}
				else{
					if(k<mp[m[i].first].first)cout<<"0\n";
					else{						
						s2=min(mp[m[i].first].second,k)-mp[m[i].first].first+1;
						cout<<s2<<"\n";
					}
				}
				//else cout<<"0\n";
			}
		}
	}
	return 0;
}