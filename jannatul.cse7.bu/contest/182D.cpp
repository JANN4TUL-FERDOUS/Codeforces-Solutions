#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
vector<ll>g[N];
ll has[N],has2[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll i,j,ans=0,k;
    string a,b;
    cin>>a>>b;
    ll len=a.length(),len2=b.length();
    ll arr[max(len,len2)];
    arr[0]=1;has[0]=0;has2[0]=0;
    for(i=1;i<=max(len,len2);i++){arr[i]=arr[i-1]*27;}
    for(i=1;i<=len;i++){
    	has[i]=has[i-1]*27+a[i-1]-'a';
    	//cout<<i<<" "<<has[i]<<endl;
    }
    for(i=1;i<=len2;i++){
    	has2[i]=has2[i-1]*27+b[i-1]-'a';
    	//cout<<has[i]<<" "<<has2[i]<<endl;
    } 
    for(i=1;i<=min(len,len2);i++){
    	if(len%i || len2%i) continue;
    	ll x=0;
    	for(j=i;j<=len;j+=i){
    		//cout<<i<<" "<<has[i]<<" "<<has[j]-has[j-i]*arr[i]<<" "<<arr[i]<<" "<<has[j]<<" "<<has[j-1]<<endl;
    		if(has[i]!=has[j]-has[j-i]*arr[i]){x=1;break;}
    	}
    	if(x==1) continue;
    	for(j=i;j<=len2;j+=i){
    		//cout<<has[i]<<" "<<has2[j]-has2[j-i]*arr[i]<<endl;
    		if(has[i]!=has2[j]-has2[j-i]*arr[i]){x=1;break;}
    	}
    	if(x==0) ans++;
    }
    cout<<ans<<"\n";
    return 0;
}