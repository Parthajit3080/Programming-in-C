#include <stdio.h>
void printHello(int n){
    if (n==0)
        return;
    
    printf("%d,",n);
    printHello(n-1);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    printHello(n);
}