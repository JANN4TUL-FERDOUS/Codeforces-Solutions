#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int nn=2e5+7;
ll a[nn];
vector<int>v;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){    	
	    ll n,k,d,w,i,j=1,s=0,s2=0,z=0,s3=0;
	    cin>>n>>k>>d>>w;
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n;){
	    	//cout<<i<<" ";
	    	s++;
	    	j=i;
	    	while(j<n && j-i<k && a[j]-a[i]<=d+w){
	    		j++;
	    	}
	    	i=j;
	    }
	    cout<<s<<endl;
    }
	return 0;
}