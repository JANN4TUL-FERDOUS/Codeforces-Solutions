#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j,k;
		int s=0,s2=0;
		cin>>n;
		int a[n],b[105]={0};
		for(i=0;i<n;i++) {
			cin>>a[i];
			b[a[i]]++;
		}
		for(i=1;i<105;i++) b[i]+=b[i-1];
	
		sort(a,a+n);
		for(k=b[1];k>0;k--){
			j=0;s=0;
			//if(k==a[n-1]) k++;
			for(i=k;i>0;i--){
				//cout<<k<<" "<<b[i]<<" "<<i<<endl;
				if(b[i]-j<2*i-1) {s=1;break;}
				j++;
			}
			if(s==0) {s2=1;cout<<k<<endl;break;}
		}
		if(s2==0) cout<<"0"<<endl;
	}
	return 0;
}