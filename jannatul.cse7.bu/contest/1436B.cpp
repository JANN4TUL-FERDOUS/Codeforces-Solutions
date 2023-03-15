#include<iostream>
using namespace std;
int main(){
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        char a[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                a[i][j]='0';
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                a[i][j]='1';
                if(i<n-1){
                    a[i][j+1]='1';
                    i++;
                }
                else{
                    a[n-1][0]='1';
                    break;
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}