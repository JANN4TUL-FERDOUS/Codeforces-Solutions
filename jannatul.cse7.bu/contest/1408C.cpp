#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=2e5+7;
ll mod=1e9+7;
ll ax[]={0,0,-1,+1};
ll ay[]={-1,1,0,0};
bitset<N>bt;
vector<ll>g[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);   	 
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,sum=0,k;
	    cin>>n>>k;
	    ll a[n];
	    for(i=0;i<n;i++) cin>>a[i];
	    double l=0.0,r=k;
	    double ans;
	    while(r-l>1e-6){
	    	double mid=(l+r)/2.0;
	    	double prev=0.0,t1=0.0,t2=0.0,sp=1.0,sp2=1.0;
	    	for(i=0;i<n;i++){
	    		if(a[i]>mid) break;
	    		t1+=(a[i]-prev)/sp;
	    		sp+=1.0;
	    		prev=a[i];
	    	}
	    	t1+=(mid-prev)/sp;
	    	ans=t1;
	    	prev=k;
	    	for(i=n-1;i>=0;i--){
	    		if(a[i]<mid) break;
	    		t2+=(prev-a[i])/sp2;
	    		sp2+=1.0;
	    		prev=a[i];
	    	}
	    	t2+=(prev-mid)/sp2;
	    	if(t1<t2) l=mid;
	    	else r=mid;
	    	//cout<<t1<<" "<<t2<<" "<<l<<" "<<r<<" "<<mid<<endl;
	    }
	    printf("%.12lf\n",ans);
	    
    }
    return 0;
}