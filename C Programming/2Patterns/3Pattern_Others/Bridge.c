/*
1      1
12    21
123  321
12344321
*/

#include<stdio.h>
void Bridge(int n) {
    for(int i =1;i<=n;i++){
        int k=1;
        for(int j=1;j<=i;j++)
            printf("%d",k++);
        for(int j=1;j<=2*(n-i);j++)
            printf(" ");
        
        int l=i;
        for(int j=1;j<=i;j++)
            printf("%d",l--);       
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    Bridge(n);
}