#include<iostream>
using namespace std;
int main(){
    int t,s,n,m,i,j;
    cin>>t;
    while(t--){
        s=0;
        cin>>n>>m;
        char a[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(i=0;i<n;i++){
            if(a[i][m-1]=='R'){
                s++;
                a[i][m-1]='D';
            }
        }
        for(i=0;i<m;i++){
            if(a[n-1][i]=='D'){
                s++;
                a[n-1][i]=='R';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}