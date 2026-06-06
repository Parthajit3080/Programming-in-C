#include <stdio.h>
void printHello(int n){
    if (n==0)
        return;
    
    
    printHello(n-1);
    printf("%d,",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    printHello(n);
}