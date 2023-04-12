#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
ll b[N],a[N];
//int a[4]={-1,1,0,0};
//int b[4]={0,0,-1,+1};
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	 ll n,i,j,s=0,s2=0,z=0;
    	 cin>>n;
    	 for(i=0;i<n;i++) {
    	 	cin>>a[i];
    	 	if(i>0 && a[i]<a[i-1]) z=i;
	 	}
	 	if(z==0 || n%2) cout<<"YES\n";
	 	else{
	 		for(i=1;i<n-1;i++){
	 			s=a[i-1]-a[i];
	 			a[i]+=s;
	 			a[i+1]+=s;
	 		}
	 		if(a[n-1]<a[n-2]) cout<<"NO\n";
	 		else cout<<"YES\n";
	 	}
    	 
	 }
    	 
    return 0;
}