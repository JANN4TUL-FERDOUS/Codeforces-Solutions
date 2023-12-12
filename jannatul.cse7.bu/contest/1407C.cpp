#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
   	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll t=1;
	//cin>>t;
   	while(t--){
   		ll n,i,j,k,s=0,q;
   		cin>>n;
   		ll a[n+1],b[n];
   		j=1;
   		for(i=2;i<=n;i++){
   			cout<<"? "<<j<<" "<<i<<endl;
   			ll x;
   			cin>>x;
   			cout<<"? "<<i<<" "<<j<<endl;
   			ll y;
   			cin>>y;
   			if(x>y){
   				a[j]=x;
   				j=i;
   			}
   			else a[i]=y;
   		}
   		a[j]=n;
   		cout<<"! ";
   		for(i=1;i<=n;i++) cout<<a[i]<<" ";
   		cout<<endl;
   			
	}
	return 0;
   		
}