#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,n,s2=0,x=0,x2;
        cin>>a;
        set<int>s;
        for(int i=2; ;i++){
            s2=i*i;
            if(s2>a) break;
            s.insert(s2);
        }
        for(int i=2; ;i++){
            s2=i*i*i;
            if(s2>a) break;
            s.insert(s2);
        }
        cout<<s.size()+1<<endl;
   }
    return 0;
}