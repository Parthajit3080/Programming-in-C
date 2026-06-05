#include <stdio.h>
void printDiamond(int n,int m) {
    int i,j;
    for(int i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i==1 || i==n)
                printf("*");
            else{ 
                if(j==1 ||j==m)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }   
} 

int main(){ 
    int n, m;
    if (scanf("%d %d", &n, &m) == 2) {
        printDiamond(n, m); 
    }
    return 0; 
}

/*
Input: n = 3, m = 5
Output:
*****
*   *
*****
Input: n = 4, m = 3
Output:
***
* *
* *  
*** 
*/