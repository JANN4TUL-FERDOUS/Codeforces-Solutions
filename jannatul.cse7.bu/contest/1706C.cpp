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
		cin>>n;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=1;i<n-1;i+=2){
			s+=max(0ll,max(a[i-1],a[i+1])-a[i]+1);
		}
		if(n%2) cout<<s<<"\n";
		else{
			s2=s;
			for(i=n-2;i>0;i-=2){
				s2-=max(0ll,max(a[i-2],a[i])-a[i-1]+1);
				s2+=max(0ll,max(a[i-1],a[i+1])-a[i]+1);
				s=min(s,s2);
			}	
			cout<<s<<"\n";		
		}		
	}
	return 0;
}