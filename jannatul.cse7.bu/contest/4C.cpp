#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>mp;
    int n;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        if(mp[a]==0){
            cout<<"OK\n";
            mp[a]++;
        }
        else{
            cout<<a<<mp[a]<<endl;
            mp[a]++;
        }
    }
    return 0;
}