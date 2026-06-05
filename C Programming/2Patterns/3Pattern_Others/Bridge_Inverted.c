/*ABCDEDCBA
ABCD DCBA
ABC   CBA
AB     BA
A       A*/
#include<stdio.h>
void Inverted_Bridge(int n) {
    for(int i=n;i>=1;i--){
        int k=65;
        for(int j=1;j<=i;j++)
            printf("%c",(char)k++);
            
        for(int j=1;j<=2*(n-i)-1;j++)
            printf(" ");
        
        int l=k-1;
        if(i==n)
            l=k-2;
        
        for(int j=1;j<=(i==n?i-1:i);j++)
            printf("%c",(char)l--);
    
        printf("\n");
    }
    
}

int main(){
    int n;
    scanf("%d",&n);
    Inverted_Bridge(n);
}