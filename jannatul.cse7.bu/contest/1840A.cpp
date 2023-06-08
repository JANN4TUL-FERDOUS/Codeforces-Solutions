#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=1e6+7;
ll mod=1e9+7;
ll a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	ll n,i,j,s=0,s2=0,z=0;
    	cin>>n;
    	string a;
    	cin>>a;
    	for(i=0;i<n;){
    		cout<<a[i];
    		j=i+1;
    		while(j<n && a[j]!=a[i]){j++;}
    		i=j+1;
    		//cout<<i<<" ";
    	}
    	cout<<endl;
    }
	return 0;
}