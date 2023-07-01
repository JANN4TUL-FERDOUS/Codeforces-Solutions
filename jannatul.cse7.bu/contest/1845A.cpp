#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=1e7+3;
ll mod=1e9+7;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,m,k,x,i,j,s=0,z,ans=0;
	   	cin>>n>>k>>x;
	   	if((k==1 && x==1) || (x==1 && k==2 && n%2)) cout<<"NO\n";
	   	else {
	   		cout<<"YES\n";
	   		if(x!=1){
	   			cout<<n<<endl;
	   			for(i=1;i<=n;i++) cout<<"1 ";
	   			cout<<endl;
	   		}
	   		else{
	   			s=n/2;
	   			cout<<s<<"\n";
	   			if(n%2){
	   				cout<<"3 ";s--;
	   			}
	   			for(i=1;i<=s;i++) cout<<"2 ";
	   			cout<<"\n";
	   		}
   		}
    }    
    return 0;
}