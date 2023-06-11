#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=1e7+3;
ll mod=1e9+7;
ll arr[N];
void seive(){
	ll i,j;
	for(i=2;i<N;i++) arr[i]=i;
	for(i=2;i*i<N;i++){
		if(arr[i]!=i) continue;
		for(j=i*i;j<N;j+=i) {
			arr[j]=min(i,arr[j]);
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    
	ll n,i,j,s2=0;
	cin>>n;
	seive();
	for(ll k=0;k<n;k++){
		ll x,y;
		cin>>x>>y;
		ll s=1e13;
		//cout<<x<<" "<<y<<" ";
		ll def=y-x;
		//cout<<def<<" "<<arr[def]<<"\n";
		if(def==1) {cout<<"-1\n";}
		else if(__gcd(x,y)>1) cout<<"0\n";
		else{
			while(def>1){
				//cout<<def<<" "<<arr[def]<<" "<<s<<endl;
				ll z=arr[def];
				s=min(s,z-(y%z));
				def/=arr[def];
				
			}	
			cout<<s<<"\n";		
		}
		
	}
	return 0;
}