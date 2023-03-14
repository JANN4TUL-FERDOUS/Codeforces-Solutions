#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	ll n,i,j;
    	ll s=0,s2=0,z=0,s3=0;
    	cin>>n;
    	s2=n*2;
    	
    	ll a[n];
    	for(i=0;i<n;i++){
    		cin>>a[i];
    	}
    	if(a[0]==1) {s2--;a[0]++;}
    	for(i=1;i<n;i++){
    		if(a[i]==1 && i<n-1){s2--;a[i]++;}
    		while(a[i]%a[i-1]==0){s2--;a[i]++;}
    	}
    	//cout<<s2<<endl;
    	for(i=0;i<n;i++) cout<<a[i]<<" ";
    	cout<<endl;
	}
	return 0;
}