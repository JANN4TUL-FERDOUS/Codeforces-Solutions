#include <bits/stdc++.h>
using namespace std;
const int n=4e4+5,m=1e9+7;
int d[n]={0};
bool pel(int i){
	int j=0,k=i;
	while(i>0){
		j=(j*10)+i%10;
		i/=10;
	}
	if(j==k) return true;
	else return false;
	
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    d[0]=1;
    for(int i=1;i<n;i++){
    	if(pel(i)){
    		for(int j=i;j<n;j++){
    			d[j]=(d[j]+d[j-i])%m;
    		}
    	}
    }
    while(t--){
    	int a;
    	cin>>a;
    	cout<<d[a]<<endl;    	
	}
    return 0;
}