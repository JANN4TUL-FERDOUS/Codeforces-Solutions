#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j,s=0,s1=0,s2=0;
        cin>>n;
        if(n<=2) cout<<n<<endl;
        else {
            s=n/3;
            s1=n%3;
            if(s1==1){
                while(s--) cout<<"12";
                if(s1!=0) cout<<s1;
                cout<<endl;
            }
            else{
                while(s--) cout<<"21";
                if(s1!=0) cout<<s1;
                cout<<endl;
            }
        }
    }
    return 0;
}