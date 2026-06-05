//https://www.geeksforgeeks.org/dsa/pattern-printing-problems/

#include<stdio.h>
void printRightHalfPyramid(int n) {
    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printRightHalfPyramid(n);
}