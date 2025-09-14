//Input 5 numbers in an array and print them.
#include <stdio.h>

int main() {
    int arr[5];
    for(int i=0; i<5;i++){
        printf("enter an element: ");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<5;i++){
        printf("%d\n", arr[i]);
        
    }
    return 0;
}