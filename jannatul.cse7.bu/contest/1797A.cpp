#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
//ll b[N],a[N];
int a[4]={-1,1,0,0};
int b[4]={0,0,-1,+1};
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	 int n,m,x1,x2,y1,y2,i,j,s=0,s2=0,z=0;
    	 cin>>n>>m;
    	 cin>>x1>>y1>>x2>>y2;
    	 for(i=0;i<4;i++){
    	 	if(a[i]+x1<=n && a[i]+x1>0 && b[i]+y1<=m && b[i]+y1>0) s++;
    	 	if(a[i]+x2<=n && a[i]+x2>0 && b[i]+y2<=m && b[i]+y2>0) s2++;
    	 	
    	 }
    	 cout<<min(s,s2)<<"\n";
    }
    return 0;
}