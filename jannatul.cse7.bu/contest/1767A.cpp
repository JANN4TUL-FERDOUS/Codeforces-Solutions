#include <bits/stdc++.h>
using namespace std;
int x[27][100005];

int main() {
    int t;
    cin>>t;
    while(t--){
    	int a[3],b[3],s=0;
    	map<int,int>m,m2;
    	for(int i=0;i<3;i++){
    		cin>>a[i]>>b[i];
    		m[a[i]]++;
    		m2[b[i]]++;
    	}
    	for(int i=0;i<3;i++){
    		if(m[a[i]]==2 && m2[b[i]]==2){
    			s=1;
    			break;
    		}
		}
		if(s==1) cout<<"NO\n";
		else cout<<"YES\n";
	}
    return 0;
}