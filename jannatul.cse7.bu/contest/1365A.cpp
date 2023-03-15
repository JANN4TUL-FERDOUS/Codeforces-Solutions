#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,i,s=0;
        cin>>n>>m;
        int a[n][m];
        set<int>x,y;
        for(i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]==1){
                    x.insert(i);
                    y.insert(j);
                }
            }
        }
        //cout<<x.size()<<" "<<y.size()<<" ";
        s=min(n-x.size(),m-y.size());
        if(s%2) cout<<"Ashish\n";
        else cout<<"Vivek\n" ;
    }
    return 0;
}