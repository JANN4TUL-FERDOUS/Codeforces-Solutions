#include<iostream>
using namespace std;
int main(){
    int m,s,s1=0,s2=1;
    cin>>m>>s;
    if(m*9<s || (m>1 && s<1)) cout<<"-1 -1";
    else{
        s1=m;
        int x=s;
        while(m){
             if(s==0) {
                cout<<"0";
                m--;
             }
             else{
                if((s-s2+8)/9>(m-1)) s2++;
                else {
                    m--;
                    cout<<s2;
                    s-=s2;
                    s2=0;
                }
             }
        }
        cout<<" ";
        while(s1--){
            if(x-9>=0){
               cout<<"9";
               x-=9;
            }
            else{
                cout<<x;
                x=0;
            }
        }
    }
    return 0;
}