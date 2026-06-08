#include <stdio.h>

void rev_array(int *arr,int n){
    if(n<=1)
        return;
    
    int t=arr[0];
    arr[0]=arr[n-1];
    arr[n-1]=t;
        
    rev_array(arr+1,n-2);
}

int main()
{
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);

    rev_array(a,n);
    
    for(int i=0;i<n;i++){
        printf("%d,",a[i]);
    }
}