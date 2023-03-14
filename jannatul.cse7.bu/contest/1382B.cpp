#include<iostream>
using namespace std;
int main(){
    int t,n;
    long long a,i,s,s1,s2;
    cin>>t;
    while(t--){
        cin>>n;
        i=0;
        s2=n;s1=0;s=0;
        while(n--){
            i++;
            cin>>a;
            if(a==1) s++;
            else {
                if(s1==0)   s1=i;
            }
        }
        if(s1==0){
            if(s%2==0) cout<<"Second\n";
            else cout<<"First\n";
        }
        else{
            if(s1%2==0) cout<<"Second\n";
            else cout<<"First\n";
        }
    }
    return 0;
}