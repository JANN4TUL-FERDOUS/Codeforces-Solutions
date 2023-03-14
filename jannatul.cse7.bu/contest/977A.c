#include<stdio.h>
int main(){
     long int a;
     int b,c;
     scanf("%d%d",&a,&b);
     while(b--){
        if(a%10==0) a/=10;
        else a--;
    }
    printf("%d\n",a);
    return 0;
}