#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,x=0,i;
        cin>>a;
        for(i=0;i<30;i++){
            if(((a>>i)&1)==1){
                x=i;
            }
        }
        cout<<(1<<x)-1<<endl;

    }
    return 0;
}