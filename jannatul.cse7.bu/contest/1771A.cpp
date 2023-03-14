#include <bits/stdc++.h>
using namespace std;
int x[27][100005];

int main() {
    int t;
    cin>>t;
    while(t--){
    	int n,i,j,s=0;
    	cin>>n;
    	map<long long,long long>m;
    	long long s2=0,s3=0;
    	long long a[n];
    	for(i=0;i<n;i++) {
    		cin>>a[i];
    		m[a[i]]++;
		}
    	sort(a,a+n);
    	if(a[0]!=a[n-1])cout<<m[a[0]]*m[a[n-1]]+m[a[n-1]]*m[a[0]]<<endl;
    	else cout<<(m[a[0]])*(m[a[0]]-1)<<endl;
    	}

    return 0;
}