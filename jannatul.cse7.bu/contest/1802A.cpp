#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
	while(t--){
		int n,i,j,z=0,s=0,s2=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<0) z++;
		}
		j=1;s2=2;
		for(i=1;i<=n;i++){
			if(j<=n-z) {cout<<j++<<" ";}
			else {cout<<j-s2<<" ";s2++;}
		}
		cout<<"\n";
		j=z*2+1;
		while(z--) cout<<"1 0 ";
		s=1;
		for(;j<=n;j++) cout<<s++<<" ";
		cout<<"\n";
	}
	return 0;
}