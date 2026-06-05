#include<stdio.h>
void lefthalf(int n) {
    for(int i =5;i>=1;i--){
        for(int j=1;j<=i-1;j++)
            printf(" ");
        
        for(int j=1;j<=n-i+1;j++)
            printf("*");
        printf("\n");
    }
    
}  
  
int main(){
    int n;
    scanf("%d",&n);
    lefthalf(n);
}