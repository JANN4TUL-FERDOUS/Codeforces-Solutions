#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string a;
    cin>>t;
    while(t--){
        cin>>a;
        vector<int>v;
        int c=0,s=0;
        int l=a.length();
        for(int i=0;i<l;i++){
            if(a[i]=='1'){
                c++;
                if(c==l || i==l-1)
                    v.push_back(c);

            }
            else{
                v.push_back(c);
                c=0;
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<v.size();i+=2)
            s+=v[i];
        cout<<s<<endl;
    }

    return 0;
}