#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++){
        for(j=0;j<n;j++){
            if(i==a[j]){
                cout<<j+1<<" ";
                break;
            }
        }
    }
    return 0;
}