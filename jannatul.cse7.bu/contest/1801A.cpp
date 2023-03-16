#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int nn=5e5+7;
//ll a[nn],b[nn];
vector<int>v;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int a[300][300],i,j,s=0;
    for(i=0;i<256;i+=2){
    	for(j=0;j<256;j+=2){
    		a[i][j]=s;
    		a[i][j+1]=s+1;
    		a[i+1][j]=s+2;
    		a[i+1][j+1]=s+3;
    		s+=4;
    		//cout<<s<<" ";
    	}
    }
    while(t--){    	
	    int n,m;
	    cin>>n>>m;
	    cout<<n*m<<"\n";
	    for(i=0;i<n;i++){
	    	for(j=0;j<m;j++){
	    		cout<<a[i][j]<<" ";
	    	}
	    	cout<<endl;
	    }
    }
	return 0;
}