#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,s=0;
    cin>>n>>m;
    int x=max(x,m);
    for(i=0;i<=x;i++){
        for(j=0;j<=x;j++){
            if(i*i+j==n && j*j+i==m)
                s++;
        }
    }
    cout<<s<<endl;
    return 0;
}