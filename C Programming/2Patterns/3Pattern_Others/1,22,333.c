#include<stdio.h>
void pattern(int n) {
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            printf("%d",k);
            
        printf("\n");
        k++;
        
    }
}

int main(){
    int n;
    scanf("%d",&n);
    pattern(n);
}