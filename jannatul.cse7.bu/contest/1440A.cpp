#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c0,c1,h,s1=0,s2=0;
        cin>>n>>c0>>c1>>h;
        string a;
        cin>>a;
        for(int i=0;i<n;i++){
            if(a[i]=='0') s1++;
            else s2++;
        }
        cout<<min(s1*c0+s2*c1,min(n*c0+h*s2,n*c1+h*s1))<<endl;
    }
    return 0;
}