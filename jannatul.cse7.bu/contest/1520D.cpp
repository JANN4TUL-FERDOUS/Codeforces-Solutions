#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,i,s=0,x;
        cin>>n;
        map<int,int>m;
        for(i=0;i<n;i++){
            cin>>x;
            s+=m[x-i];
            m[x-i]++;

        }
        cout<<s<<endl;
    }
    return 0;
}