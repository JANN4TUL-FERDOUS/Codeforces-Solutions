#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s%n==0) cout<<s/n<<endl;
        else cout<<s/n+1<<endl;
    }
    return 0;
}