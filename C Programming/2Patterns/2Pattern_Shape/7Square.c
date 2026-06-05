/*4444444
4333334
4322234
4321234
4322234
4333334
4444444*/
#include<stdio.h>
int min(int x,int y){
    return (x<y)?x:y;
}
void Bridge(int n) {
    for(int i =0;i<2*n-1;i++){
        for(int j =0;j<2*n-1;j++){
            
            int min_ij=min(i,j);
            int min_last=min(2*n-2-i,2*n-2-j);
            
            printf("%d",n-min(min_ij,min_last));
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    Bridge(n);
}