#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,dif,res;
    cin>>t;
    while(t--){
        cin>> a>>b;
        res=0;
        while(a!=b){
            res++;
            dif=abs(a-b);
            if(a>b){
                if(dif%2==0){
                    a-=dif;
                    break;
                }
                else a=a-dif-1;
            }
            else if(a<b){
                if(dif%2!=0){
                    a+=dif;
                    break;
                }
                else a=a+dif-1;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}