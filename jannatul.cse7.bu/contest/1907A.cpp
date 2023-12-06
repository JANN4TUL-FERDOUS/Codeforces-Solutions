#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ff first
#define ss second
#define pb push_back
const int N=3e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	ll n,i,j,s=0;
    	string a;
    	cin>>a;
    	char ch=a[0];
    	int x=a[1]-'0';
    	for(char c='a';c<='h';c++){
    		if(c==ch) continue;
    		cout<<c<<x<<endl;
    	}
    	for(i=1;i<=8;i++){
    		if(i==x) continue;
    		cout<<ch<<i<<endl;
    	}
    }
	return 0;
}