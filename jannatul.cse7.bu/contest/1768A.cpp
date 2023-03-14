#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i;
    cin>>t;
    map<long long,int>m;
    long long s=1,a[10000];
    a[0]=1;
    for(i=1;i<10000;i++){
    	a[i]=s*i;
    	s*=i;
    	//cout<<i<<" "<<s<<endl;
    	if(s>=9000000002) break;	
    }
    //cout<<i<<" ";
    while(t--){
    	long long k;
    	cin>>k;
    	cout<<k-1<<endl;
    	
    	
    	
	}
    return 0;
}