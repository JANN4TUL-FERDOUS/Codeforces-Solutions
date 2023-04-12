#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
ll b[N],a[N];
//int a[4]={-1,1,0,0};
//int b[4]={0,0,-1,+1};
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	 ll n,i,j,s=0,s2=0,z=0;
    	 cin>>n;
    	 s=2*n;s2=2;
    	 for(i=0;i<n;i++){
    	 	if(i%2) {a[i]=s2;s2+=2;}
    	 	else{a[i]=s;s-=2;}
    	 }
    	 s=1;
    	 for(i=n;i<2*n;i+=2){
    	 	a[i]=s;
    	 	s+=2;
    	 }
    	 s=2*n-1;
    	 for(i=2*n-1;i>n;i-=2){
    	 	a[i]=s;
    	 	s-=2;
    	 }
    	 for(i=0;i<2*n;i++){
    	 	if(i==n) cout<<"\n";
    	 	cout<<a[i]<<" ";
    	 }
    	 cout<<endl;
	 }
    	 
    return 0;
}