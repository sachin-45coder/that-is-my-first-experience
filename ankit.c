#include<stdio.h>

int main(){
    int arr[] = {1, 3,2,6,8,5, 6};
    int sum = 0;  // Initialize sum to 0
    
    for(int i = 0; i < sizeof(arr) / sizeqof(arr[0]); i++ ){  // Correct the loop condition
        if(arr[i]%2==0){
            printf("%d",arr[i]);
        }
    }
    
    return 0;
}
