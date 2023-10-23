#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const ll N=1e6+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
    	ll i,n,m,k,j=1,s=0,x=0;
    	string a;
    	cin>>a;
    	for(i=0;i<4;i++){
    		if(a[i]=='0' && j==0) {s++;continue;}
    		k=a[i]-'0';
    		if(a[i]=='0') s+=10-j+1;
    		else if(j==0) s+=10-k+1;
    		else s+=abs(j-k)+1;
    		j=k;
    	}
    	cout<<s<<"\n";
	}
	return 0;
}