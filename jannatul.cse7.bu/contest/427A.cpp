#include<iostream>
using namespace std;
int main(){
    int n,a,sum=0,res=0;
    cin >> n;
    while(n--){
        cin >>a;
        if(a>0) sum+=a;
        else {
            if(sum>0) sum--;
            else res++;
        }

    }
    cout<<res<<endl;
    return 0;
}