#include <stdio.h>
int printHello(int n){
    if (n<=0)
        return 1;
    return n * printHello(n-1);
    
}
int main()
{
    int n,sum;
    scanf("%d",&n);
    sum=printHello(n);
    printf("%d",sum);
}