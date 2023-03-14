#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,s=0,s2=0,i,j;
       string a;
       cin>>a;
       vector<int>v[27];
       for(i=0;i<a.length();i++){
            s=a[i]-'a'+1;
            //cout<<s<<" ";
            v[s].push_back(i+1);
       }
       int l1=a[0]-'a'+1,l2=a[a.length()-1]-'a'+1;
       //cout<<l1<<" "<<l2<<" ";
       s=0;
       if(l1>=l2){
            for(i=l1;i>=l2;i--){
                s+=v[i].size();
            //cout<<v[i].size()<<" ";
            }
       }
       else{
         for(i=l1;i<=l2;i++){
            s+=v[i].size();
         }
       }
       cout<<abs(l1-l2)<<" "<<s<<endl;
       if(l1>=l2){
            for(i=l1;i>=l2;i--){
                for(j=0;j<v[i].size();j++){
                    cout<<v[i][j]<<" ";
                }
           }
       }
       else{
            for(i=l1;i<=l2;i++){
                for(j=0;j<v[i].size();j++){
                    cout<<v[i][j]<<" ";
                }
           }
       }
       cout<<endl;
    }
    return 0;
}