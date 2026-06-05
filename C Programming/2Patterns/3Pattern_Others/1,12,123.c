/*
1
12
123
1234
*/

#include <stdio.h>

void printNumberPattern(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printNumberPattern(n);
}