#include<iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    if(t==10){
        if(n==1) cout<<"-1\n";
        else{
            for(int i=0;i<n-1;i++)
                cout<<1;
            cout<<0;
        }
    }
    else{
        while(n--){
            cout<<t;
        }
        cout<<endl;
    }
    return 0;
}