#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        if(n%2!=0){
            cout<<"3 1 2"<<" ";
            for(i=4;i<=n;i+=2)
                cout<<i+1<<" "<<i<<" ";
        }
        else{
            for(i=1;i<=n;i+=2)
                cout<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}