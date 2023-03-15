#include<iostream>
using namespace std;
int main(){
    int t,i,s,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k*3-k+1>n) cout<<"-1\n";
        else{
            s=2;
            cout<<"1";
            while(k--){
                for(i=s;i<=n;i++){
                    if(i%2==0) cout<<" "<<i+1;
                    else {
                        s=i+1;
                        cout<<" "<<i-1;
                        break;
                    }

                }
            }
            for(i=s;i<=n;i++) cout<<" "<<i;
            cout<<endl;
        }

    }
    return 0;
}