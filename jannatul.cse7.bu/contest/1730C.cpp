#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int l=t;
    while(t--){
        int n,c,s=0,s1=0,s2=0,i,j=0;
        string a;
        cin>>a;
        n=a.length();
        vector<int>v;
        vector<int>v2;
        map<int,int>m;
        for(i=0;i<n;i++){
            s=a[i]-'0';
            m[s]++;
            v2.push_back(s);
        }
        sort(v2.begin(),v2.end());
        for(i=0;i<n;i++){
            s=a[i]-'0';
            while(m[v2[j]]==0 && j<n) j++;
            if(s==v2[j]){
                v.push_back(s);
                j++;
                m[s]--;
            }
            else{
                v.push_back(min(s+1,9));
                m[s]--;
            }
        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++) cout<<v[i];
        cout<<endl;
    }
    return 0;
}