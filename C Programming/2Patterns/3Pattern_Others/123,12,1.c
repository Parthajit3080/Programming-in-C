#include<stdio.h>
void pattern(int n) {
    for(int i=n;i>=1;i--){
        int k=1;
        for(int j=1;j<=i;j++)
            printf("%d",k++);
            
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    pattern(n);
}