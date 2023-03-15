#include<iostream>
using namespace std;
int main(){
    int t;
    long long a;
    cin>>t;
    while(t--){
        cin>>a;
        if(a<4) cout<<4-a<<endl;
        else{
            if((a%10)%2==0) cout<<"0\n";
            else cout<<"1\n";
        }
    }
    return 0;
}