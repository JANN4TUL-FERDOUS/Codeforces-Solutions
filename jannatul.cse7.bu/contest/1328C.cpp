#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int i,j=0,k=0,x=-1;
        string a,b(n,'0'),c(n,'0');
        cin>>a;
        for(i=0;i<n;i++){
            if(a[i]=='1'){
                b[i]='1';
                c[i]='0';
                x=i;
                break;
            }
            else if(a[i]=='2'){
                b[i]='1';
                c[i]='1';
            }
            else if(a[i]=='0'){
                b[i]='0';
                c[i]='0';
            }
        }
        if(x>0){
            for(i=x+1;i<n;i++){
                b[i]='0';
                c[i]=a[i];
            }
        }
        cout<<b<<endl<<c<<endl;
    }
    return 0;
}