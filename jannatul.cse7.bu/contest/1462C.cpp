#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        int i=0;
        cin>>n;
        if(n>45) cout<<"-1\n";
        else{
            int x=9,y=0;
            while(x>0 && n-x>0){
                n-=x;
                x--;
            }
            cout<<n;
            for(i=x+1;i<=9;i++)
            cout<<i;
            cout<<endl;
        }

    }
    return 0;
}