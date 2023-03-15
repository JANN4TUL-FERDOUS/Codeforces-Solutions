#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,r,c,i,j,s=-1,s2=100;
        cin>>n>>m>>r>>c;
        char a[n][m];
        r--;
        c--;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]=='B'){
                    s=0;
                    if(i==r || j==c) s2=0;
                }
            }
        }
        if(a[r][c]=='B') cout<<"0\n";
        else if(s2==0) cout<<"1\n";
        else if(s==-1) cout<<"-1\n";
        else cout<<"2\n";
    }
    return 0;
}