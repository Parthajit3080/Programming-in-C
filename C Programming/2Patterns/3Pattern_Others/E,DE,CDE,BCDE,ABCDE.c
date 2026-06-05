/*
E
ED
EDC
EDCB
EDCBA
*/

#include<stdio.h>
void pattern(int n) {
    for(int i=1;i<=n;i++){
        int k=69;
        for(int j=1;j<=i;j++){
            printf("%c",(char)k--);
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    pattern(n);
}