#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
vector<pair<ll,ll>>vv(N);
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll n,i,j,s=0,s2=0,z=0,z2=0,ans=0,x,y;
  		vector<ll>v,v2;
  		cin>>n>>s>>s2;
  		for(i=0;i<n;i++){
  			cin>>x;
  			vv[i]={x,i+1};
  			//cout<<x<<" "<<i+1<<" "<<vv[i].first<<" "<<vv[i].second<<"\n";
  		}
  		sort(vv.begin(),vv.begin()+n);
  		x=0,y=0;ans=0;
  		for(i=n-1;i>=0;i--){
  			//cout<<vv[i].second<<" ";
  			if(x+s>y+s2){
  				v2.push_back(vv[i].second);
  				y+=s2;
  			}
  			else{
  				v.push_back(vv[i].second);
  				x+=s;
  			}
		}
  		cout<<v.size()<<" ";
  		for(i=0;i<(int)v.size();i++) cout<<v[i]<<" ";
  		cout<<endl;
  		cout<<v2.size()<<" ";
  		for(i=0;i<(int)v2.size();i++) cout<<v2[i]<<" ";
  		cout<<endl;
	}
	return 0;
}