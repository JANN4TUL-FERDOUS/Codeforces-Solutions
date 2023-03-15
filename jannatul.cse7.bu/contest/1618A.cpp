#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,s=0,j,b;
        int a[7];
        for(i=0;i<7;i++){
            cin>>a[i];
        }
        sort(a,a+7);
        for(i=0;i<6;i++){
            if(s==1) break;
            for(j=i+1;j<6;j++){
                if(s==1) break;
                for(int k=j+1;k<6;k++){
                    if(a[i]+a[j]+a[k]==a[6]){
                        cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                        s=1;
                        break;
                    }
                }
            }
        }
    }
    return 0;

}