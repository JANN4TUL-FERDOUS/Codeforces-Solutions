#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int l=t;
    while(t--){
        int n,i,s=0,m=0;
        cin>>n;
        int l=n*(n-1);
        int a[l];
        for(i=0;i<l;i++){
        	cin>>a[i];
        }
        vector<int>v;
        int k=n-1,j=0;
        while(k--){
        	 int x=0,x2=0,y=0,y2=0;
        	 for(i=j;i<l;i+=n-1){
        		if(x==0){
        			x=a[i];x2++;
        		}
        		else{
        			if(x==a[i]) x2++;
        			else {y=a[i];y2++;}
        		}
        	}
        	//cout<<x<<" "<<x2<<" "<<y<<" "<<y2<<endl;
        	if(j==0){
        		if(x2>y2){
        			v.push_back(x);
        			v.push_back(y);
    			}
    			else{
    				v.push_back(y);
        			v.push_back(x);
    			}
        		
        	}
        	else{
        		if(v[v.size()-1]!=x) v.push_back(x);
        		else v.push_back(y);
        	}
        	j++;
        }
        for(i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}