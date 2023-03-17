#include<iostream>
using namespace std;
int main(){
    int t;
    long n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n>30){
            cout<<"Yes\n";
            n-=30;
            if(n%6==0 || n%10==0 || n%14==0)
                cout<<"6 10 15 "<<n-1<<endl;
            else cout<<"6 10 14 "<<n<<endl;
        }
        else cout<<"No\n";
    }
    return 0;
}