#include<stdio.h>
void invertedleftHalf(int n) {
    for(int i =1;i<=5;i++){
        for(int j=1;j<=i-1;j++)
            printf(" ");
        
        for(int j=i;j<=n;j++)
            printf("*");
        printf("\n");
    }
    
}  
  
int main(){
    int n;
    scanf("%d",&n);
    invertedleftHalf(n);
}