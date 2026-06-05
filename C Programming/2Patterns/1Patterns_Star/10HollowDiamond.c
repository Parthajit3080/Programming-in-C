#include<stdio.h>
void Hourglass(int n) {
    for(int i =n;i>=1;i--){
        for(int j=1;j<=i;j++)
            printf("*");
        for(int j=1;j<=2*(n-i);j++)
            printf(" ");
        
        int start= (i==n)?1:1;
        for(int j=start;j<=i;j++)
            printf("*");       
        printf("\n");
    }
    
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++)
            printf("*");
        for(int j=1;j<=2*(n-i);j++)
            printf(" ");
        
        int start= (i==n)?1:1;
        for(int j=start;j<=i;j++)
            printf("*");       
        printf("\n");
    }
    
}

int main(){
    int n;
    scanf("%d",&n);
    Hourglass(n);
}