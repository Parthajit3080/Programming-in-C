/*
    A
   ABA
  ABCAB
 ABCDABC
ABCDEABCD
*/
#include<stdio.h>
void pattern(int n) {
    for(int i=1;i<=n;i++){
        int k=65;
        for(int j=1;j<=n-i;j++)
            printf(" ");
        
        for(int j=1;j<=i;j++)
            printf("%c",(char)k++);
        
        int l=65;
        for(int j=1;j<=i-1;j++)
            printf("%c",(char)l++);
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    pattern(n);
}