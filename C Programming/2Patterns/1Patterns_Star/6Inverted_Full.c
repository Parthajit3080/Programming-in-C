#include<stdio.h>
void invertedfullpyramid(int n) {
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i-1;j++)
        printf(" ");
        
        for(int j=1;j<=n-i+1;j++)
            printf("*");
            
        for(int j=1;j<=n-i;j++)
        printf("*");
        
        printf("\n");
    }

}
int main(){
    int n;
    scanf("%d",&n);
    invertedfullpyramid(n);
}