#include<stdio.h>
void invertedRightHalf(int n) {
    for(int i =n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}  
  
int main(){
    int n;
    scanf("%d",&n);
    invertedRightHalf(n);
}