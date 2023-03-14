#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n,i,j;
    	ll s=0,s2=0,z=0;
    	cin>>n;
    	ll a[n];
    	vector<pair<int,int>>v;
    	vector<pair<long long,int>>m;
    	vector<int>vv;
    	for(i=0;i<n;i++) {
    		cin>>a[i];
    		m.push_back({a[i],i+1});
		}
    	sort(m.begin(),m.end());
    	if(n==1 || m[n-1].first==m[0].first) cout<<"0\n";
    	else if(m[0].first==1) cout<<"-1\n";
    	else{
    		while(m[0].first!=m[n-1].first){
	    		for(i=1;i<n;i++){
	    			while(m[i].first>m[0].first){
	    				m[i].first=(m[i].first+m[0].first -1)/m[0].first;
	    				//cout<<s<<" "<<m[i].second<<endl;
	    				v.push_back({m[i].second,m[0].second});
	    			}
	    		}
	    		sort(m.begin(),m.end());
    		}
    		int l=v.size();
    		cout<<l<<"\n";
    		for(i=0;i<l;i++){
    			cout<<v[i].first<<" "<<v[i].second<<"\n";
    		}
		}
    }
	return 0;
}