#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int nn=5e5+7;
ll a[nn],b[nn];
vector<int>v;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){    	
	    ll n,x,p,s=-1,s2=0,i,j,z=0;
	    cin>>n>>x;
	    for(i=0;i<n;i++) {cin>>a[i];b[i]=a[i];}
	    map<ll,ll>m;
	    j=0;
	    sort(a,a+n);
	    for(i=0;i<n;i++){
	    	if(a[i]<=x) {
	    		x-=a[i];
	    		j++;
	    	}
	    	else break;
	    }
	   // cout<<j<<" "<<a[j-1]+x<<" "<<b[j]<<endl;
	   	if(j>0 && j<n && a[j-1]+x>=b[j]) j++;
	   	cout<<n-j+1<<"\n";
    }
	return 0;
}