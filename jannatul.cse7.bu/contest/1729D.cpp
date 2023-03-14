#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>v(N);
vector<int>v2(N);
int main(){
    int t;
    cin>>t;
    while(t--){
       long long n,s=0,s2=0;
       cin>>n;
       int i=0,j=0,k=0;
       long long a[n],b[n];
       for(i=0;i<n;i++)cin>>b[i];
       for(j=0;j<n;j++) cin>>a[j];
       j=0;
       for(i=0;i<n;i++){
            s2=a[i]-b[i];
            //cout<<s2<<" ";
            if(s2<0) v2[k++]=s2;
            else v[j++]=s2;
       }
       int l2=j;
       //cout<<j<<" "<<k<<" ";
       int l=0;
      sort(v2.begin(),v2.begin()+k,__greater());
       sort(v.begin(),v.begin()+j);
       for(i=0;i<k;i++){
           //cout<<v2[i]<<" ";
           if(l>j) break;
           while(v2[i]+v[l]<0) {
                l++;
                if(l==j) break;
           }
          // cout<<v2[i]<<" "<<v[l]<<" "<<v2[i]+v[l]<<" ";
          // cout<<l<<" "<<j<<" ";
           if(l<j) {l++;l2++;}
       }
       cout<<l2/2<<endl;
    }
    return 0;
}