#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
const int N=3e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,k,i,j,s=0,s2=0,z=0,s3=0;
		cin>>n;
		ll a[n];
		vector<ll>v;
		map<ll,ll>mp;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0) s++;
			else if(a[i]<0) s2++;
			mp[a[i]]=1;
			if(a[i]!=0) v.push_back(a[i]);
		}
		//cout<<s<<" "<<s2<<" "<<s3<<endl;
		sort(v.begin(),v.end());
		ll l=v.size();
		if(l>4 || s2>2 || s>2 || (l==2 && mp[v[0]+v[1]]==0)|| (n>l &&(s==2 || s2==2))) cout<<"NO\n";
		else{
			if(l==1 || (l==2 && mp[v[0]+v[1]]==1)){
				cout<<"YES\n";
				continue;
			}
			for(i=0;i<l-2&& z==0;i++){
				for(j=i+1;j<l-1 && z==0 ;j++){
					for(k=j+1;k<l;k++){
						if(mp[v[i]+v[j]+v[k]]==0) {z=1;break;}
					}
				}
			}
			if(z==0)cout<<"YES\n";
			else cout<<"NO\n";
		} 
	}
	return 0;
}