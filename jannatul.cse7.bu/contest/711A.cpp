#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,s=0;
    cin>>n;
    char a[n][5];
    for(i=0;i<n;i++){
        for(j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<4;j++){
            if(a[i][j]=='O'&&a[i][j+1]=='O'){
                s=1;
                a[i][j]='+';
                a[i][j+1]='+';
                break;
            }
        }
        if(s==1) break;
    }

    if(s==1){
        cout<<"YES\n";
        for(i=0;i<n;i++){
            for(j=0;j<5;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}