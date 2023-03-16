#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char a[n][n];
        int x1=-1,x2,y1,y2,i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>a[i][j];
                if(a[i][j]=='*'){
                    if(x1==-1){
                        x1=i;
                        y1=j;
                    }
                    else{
                        x2=i;y2=j;
                    }
                }
            }
        }
        if(x1==x2){
            if(x1!=n-1){
                x1++;x2++;
            }
            else{
                x1--;x2--;
            }
        }
        else if(y1==y2){
            if(y1!=n-1){
                y1++;y2++;
            }
            else{
                y1--;y2--;
            }
        }
        else{
            swap(y1,y2);
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if((i==x1 && j==y1) ||(i==x2 && j==y2)) cout<<"*";
                else cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}