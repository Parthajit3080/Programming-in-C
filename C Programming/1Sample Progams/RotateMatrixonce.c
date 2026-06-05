#include<stdio.h>


void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    return;
}

void matrix(int n, int a[n][n]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(&a[i][j],&a[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(&a[i][j], &a[i][n-1-j]);
        }
    }

    printf("\nThe Rotated Matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n,k=1;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=k++;
        }
    }
    printf("The Matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    matrix(n,a);

}