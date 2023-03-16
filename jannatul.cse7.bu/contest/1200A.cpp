#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    string a;
    cin>>a;
    int b[10]={0};
    for(i=0;i<n;i++){
        if(a[i]=='L'){
            for(j=0;j<10;j++){
                if(b[j]==0){
                    b[j]=1;
                    break;
                }
            }
        }
        else if(a[i]=='R'){
            for(j=9;j>=0;j--){
                if(b[j]==0){
                    b[j]=1;
                    break;
                }
            }
        }
        else {
            a[i]-='0';
            b[a[i]]=0;
        }
    }
    for(i=0;i<10;i++) cout<<b[i];
    return 0;
}