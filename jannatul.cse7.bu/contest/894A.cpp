#include<iostream>
using namespace std;
int main(){
    int i,j,k,s=0;
    string a;
    cin>>a;
    int l=a.length();
    for(i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            for(k=j+1;k<l;k++){
                if(a[i]=='Q' && a[j]=='A' && a[k]=='Q')
                    s++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}