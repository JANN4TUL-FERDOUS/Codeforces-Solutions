#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,w,i,j,s=0;
        cin>>h>>w;
        h--;
        for(i=0;i<h;i++){
            if(i==0){
                for(j=0;j<w;j++){
                    if(j%2) cout<<"0";
                    else cout<<"1";
                }
            }
            else{
                if(i%2 || (h%2 && i==h-1)){
                    for(j=0;j<w;j++) cout<<"0";
                }
                else{
                    for(j=0;j<w;j++){
                        if(j==0 || j==w-1) cout<<"1";
                        else cout<<"0";
                    }
                }

            }
            cout<<endl;
        }

        for(j=0;j<w;j++){
            if(j%2) cout<<"0";
            else cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}