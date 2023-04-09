#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
//ll b[N],a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	 ll n,i,j,k,s=0,s2=0,z=0;
    	 cin>>n>>k;
    	 ll a[n][n];
    	 vector<ll>v;
    	 map<ll,ll>m;
    	 for(i=0;i<n;i++){
    	 	for(j=0;j<n;j++)cin>>a[i][j];
    	 }	
    	 for(i=0;i<(n+1)/2;i++){
    	 	for(j=0;j<n;j++){
    	 		if(a[i][j]!=a[n-1-i][n-1-j]){
    	 			a[i][j]=a[n-1-i][n-1-j];
    	 			//cout<<i<<j<<endl;
    	 			s++;
	 			}
    	 	}
    	 }
    	 //cout<<s<<endl;
    	 if(s>k) cout<<"NO\n";
    	 else{
    	 	s2=k-s;
    	 	if(s2%2==0 || n%2==1) cout<<"YES\n";
    	 	else cout<<"NO\n";
    	 }
    }
    return 0;
}