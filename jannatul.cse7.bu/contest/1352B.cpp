#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        int k,x,y;
        cin>>n>>k;
        int s=n%10;
        if(k>n || (s%2!=0 && k%2==0) || (s%2==0 && k%2!=0 && k*2>n))
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            if(s%2==0 && k%2!=0){
                if(n-(k-1)*2>0){
                    cout<<n-(k-1)*2<<" ";
                    k--;
                }
                while(k--) cout<<"2 ";
            }
            else{
                if(n-k+1>0){
                    cout<<n-k+1<<" ";
                    k--;
                }
                while(k--) cout<<"1 ";
            }
            cout<<endl;
        }
    }
    return 0;
}