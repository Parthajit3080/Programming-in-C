/*🧩 Problem: Divide Numbers into Bins of Size 10

You are given an array of integers. Your task is to group the numbers into bins of size 10. Each bin represents a range:
0–9 → Bin 0
10–19 → Bin 1
20–29 → Bin 2
and so on…

Innput:
n = 8
arr = [3, 15, 27, 8, 19, 21, 30, 4, 55]

Output:
Bin 0 (0–9): 3 8 4  
Bin 1 (10–19): 15 19  
Bin 2 (20–29): 27 21  
Bin 3 (30–39): 30  
Bin 5 (50–59): 55  

*/
#define max 100 
#include<stdio.h>
int main(){
    int arr[] = {3, 15, 27, 8, 19, 21, 30, 4, 55};
    int bin[max][max], i ,j ,x, index, maxindex=0;
    int count[max]={0};
    
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        x=arr[i];
        index=x/10;
        bin[index][count[index]]=x;
        count[index]++;

        if(maxindex<index) maxindex=index;
    }

    for(i=0;i<=maxindex;i++){
        if(count[i]>0){
            printf("Bin %d (%d-%d):",i,i*10,i*10+9);
            for(j=0;j<count[i];j++){
                printf("%d ",bin[i][j]);
            }
            printf("\n");
        }
    }
}