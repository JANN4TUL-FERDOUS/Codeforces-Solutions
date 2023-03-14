#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        long long k,i,x,y;
        cin>>n>>k;
        long long a[n];
        cin>>a[0];
        x=a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(a[i]>x) x=a[i];
        }
        for(int i=0;i<n;i++){
            a[i]=x-a[i];
            if(i==0) y=a[i];
            if(a[i]>y) y=a[i];
        }
        if(k%2==1) {
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
        }
        else{
            for(int i=0;i<n;i++){
                cout<<y-a[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}