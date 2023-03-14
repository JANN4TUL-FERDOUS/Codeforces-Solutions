#include<iostream>
using namespace std;
int main(){
    int t;
    long long n,i,s;
    cin>>t;
    while(t--){
        s=0;
        cin>>n;
        for(i=1;i<=n;i=i*10+1){
            for(int j=1;j<=9;j++){
                if(j*i<=n) s++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}