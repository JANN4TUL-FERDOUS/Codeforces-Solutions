#include<iostream>
using namespace std;
int main(){
    int t,a,b1,b2,c1,c2;
    cin>>t;
    while(t--){
        cin>>a>>b1>>c1;
        cin>>b2>>c2;
        int s=0;
        a/=2;
        if(c2>b2){
            swap(b1,c1);
            swap(b2,c2);
        }
        if(a>=b1){
            s+=b1*b2;
            a-=b1;
            if(a>=c1) s+=c1*c2;
            else s+=a*c2;
        }
        else s+=a*b2;
        cout<<s<<endl;
    }
    return 0;
}