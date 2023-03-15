#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        if(a<4) cout<<a-1<<endl;
        else{
            if((a%10)%2==0) cout<<"2\n";
            else cout<<"3\n";
        }
    }
    return 0;
}