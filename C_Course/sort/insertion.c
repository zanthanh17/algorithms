#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void insertionSort(int *arr, int size){
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int key = arr[i];
        /* Move all elements greater than key to one position */
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        /* Find a correct position for key */
        arr[j + 1] = key;
    }
}
int main(){
    int n;
    int arr[100];
    scanf("%d ", &n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    insertionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}