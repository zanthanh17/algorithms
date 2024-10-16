#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comparator(const void *a, const void *b){
    //ep 2 con tro void sang 2 con tro int
    int *x = (int*)a;
    int *y = (int*)b;
    if(*x != *y)
        
    return *x - *y;
}


int main(){
    int n;
    int arr[100];
    scanf("%d ", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    qsort(arr, n,sizeof(int), comparator);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}