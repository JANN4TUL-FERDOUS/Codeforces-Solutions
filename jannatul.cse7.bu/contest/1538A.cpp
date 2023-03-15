#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int i,x=0,y=0,m2=-1,m1=999999,s=0,a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>m2){
                m2=a[i];
                y=i+1;
            }
            if(a[i]<m1){
                m1=a[i];
                x=i+1;
            }
        }
        int b=n/2;
        if(n%2!=0) b++;
        if(x<=b && y<=b) cout<<max(x,y)<<endl;
        else if(x>=b && y>=b) cout<<n-min(x,y)+1<<endl;
        else{
            s=min(x,n-x+1);
            int s1=min(y,n-y+1);
            int dif=abs(x-y);
            cout<<min(s+s1,min(s+dif,s1+dif))<<endl;
        }

    }
    return 0;
}