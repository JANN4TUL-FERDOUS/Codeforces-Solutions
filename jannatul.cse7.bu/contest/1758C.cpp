#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int i,n,x;
    	cin>>n>>x;
    	if(n%x==0){
    		int a[n+1]={0};
    		a[1]=x;a[n]=1;
    		for(i=x*2;i<=n;i+=x){
    			if(n%i==0){
    				a[x]=i;
    				x=i;
				}
			}  
			for(i=1;i<=n;i++){
    			if(a[i]==0) cout<<i<<" ";
    			else cout<<a[i]<<" ";
    		}
    		cout<<endl;  		
    	}
    	else cout<<"-1\n";
	}
    return 0;
}