#include <stdio.h>
#include <string.h>

int main() {
    
    int arr[5];
    long s=0;
    for(int i=0;i<5;i++){
        scanf("%d",arr+i);
        s+=arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("%ld %ld",s-max,s-min);
    return 0;
}
