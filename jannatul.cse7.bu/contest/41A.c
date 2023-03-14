#include<stdio.h>
#include<string.h>
int main(){
   char s[1000],y[1000];
   int i,j,k=0;

   scanf("%s%s",&s,&y);
    for(i=0,j=strlen(s)-1;i<strlen(s)-1,j>=0;i++,j--){
        if(s[i]==y[j]) k++;
        else{
            printf("NO\n");
            break;
        }

    }
    if(k==strlen(y))printf("YES\n");

   return 0;
}