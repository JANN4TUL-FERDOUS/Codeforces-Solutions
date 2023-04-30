#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll i,n,j,k,s=1,s2=0,z=0;
		cin>>n;
		if(n==1) cout<<"1\n";
		else if(n%2) cout<<"-1\n";
		else{
			s=n/2;
			z=1;
			for(i=1;i<=n;i+=2){
				cout<<i+1<<" "<<i<<" ";
			}
			cout<<endl;
		}	
	}
	return 0;	
}