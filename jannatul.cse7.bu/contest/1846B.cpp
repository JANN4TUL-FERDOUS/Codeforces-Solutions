#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=4e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
ll arr[N];
vector<ll>g[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    //ll l=t;
    while(t--){
    	//cout<<t<<" ";//cout<<"Case "<<l-t<<": ";
    	ll n,i,j,s=0,z=0,ans=0;
    	char res;
    	char a[3][3];
    	for(i=0;i<3;i++){
    		string str;
    		cin>>str;
    		a[i][0]=str[0];a[i][1]=str[1];a[i][2]=str[2];
    	}
    	/*for(i=0;i<3;i++){
    		for(j=0;j<3;j++) cout<<a[i][j];
    		cout<<endl;
    	}*/
    	
    	for(i=0;i<3;i++){
    		if(a[i][0]==a[i][1] && a[i][1]==a[i][2] && a[i][0]!='.'){
    			z=1;
    			cout<<a[i][0]<<endl;
    			break;
			}
    		if(a[0][i]==a[1][i] && a[1][i]==a[2][i] && a[0][i]!='.'){
    			z=1;
    			cout<<a[0][i]<<endl;
    			break;}
    	}
    	if(z==0){
    		if(a[0][0]== a[1][1] && a[1][1]==a[2][2] && a[1][1]!='.'){
    			z=1;
    			cout<<a[0][0]<<endl;
    			continue;
    		}
    		if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[1][1]!='.'){
    			z=1;
    			cout<<a[0][2]<<"\n";
    			continue;
	    	}
    	}
    	if(z==0) cout<<"DRAW\n";
	}
	return 0;
}