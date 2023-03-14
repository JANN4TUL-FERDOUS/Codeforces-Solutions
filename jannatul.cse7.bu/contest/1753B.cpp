#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,i;
    cin>>n>>x;
    map<int,int>m;
    int a[n];
    for(i=0;i<n;i++){cin>>a[i];m[a[i]]++;}
    for(i=1;i<x;i++){
    	if(m[i]%(i+1)==0){
    		m[i+1]+=m[i]/(i+1);
    	}
    	else{
    		cout<<"No\n";
    		return 0;
    	}
    }
	cout<<"Yes\n";
    return 0;
}