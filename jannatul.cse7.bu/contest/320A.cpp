#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int x=0,y=0;
    for(int i=0;i<a.length();i++){
        if(a[0]=='4' ||( a[i]!='1' && a[i]!='4')){
            y=1;
            break;
        }
        if(a[i+1]=='4'){
            if(x=0 && a[i]!='1'){
                x++;
                y=1;
                break;
            }
            if(a[i+2]=='4' && a[i+3]=='4'){
                y=1;
                break;
            }
        }
    }
    if(y==1) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}