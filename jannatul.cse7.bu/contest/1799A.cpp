#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n,i,j,nn,s=0,s2=0,z=0;
    	cin>>n>>nn;
    	int a[nn];
    	vector<int>v;
    	map<int ,int>m,m2,mm;
    	for(i=0;i<nn;i++){
    		cin>>a[i];
		}
		for(i=n;i>0;i--){
			s++;
			v.push_back(i);
			m[i]=s;
			mm[i]=1;
			m2[i]=-1;
		}
    	j=0;
    	//cout<<v.size()<<endl;
    	for(i=0;i<nn;i++){
    		if(mm[a[i]]==1){
    			//cout<<v[m[a[i]]-1]<<" "<<v[s-1]<<"\n";
    			swap(v[m[a[i]]-1],v[s-1]); 
    			m[v[s-1]]=m[a[i]];
    			m[a[i]]=s;
    			   			
    		}
    		else{
    			v.push_back(a[i]);
    			m[a[i]]=++s;
    			if(m2[v[j]]==-1)m2[v[j]]=i+1;
    			mm[v[j]]=0;
    			mm[a[i]]=1;
    			j++;
    			//cout<<a[i]<<" "<<m[a[i]]<<" "<<v[j-1]<<" "<<m2[v[j-1]]<<" "<<j<<endl;
    			
    		}
    	}
    	for(i=1;i<=n;i++) cout<<m2[i]<<" ";
    	cout<<endl;
    }
	return 0;
}