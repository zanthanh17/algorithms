#include <assert.h>
#include <stdio.h>

int binarysearch1(const int *arr, int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        // If element is present at middle
        if (arr[mid] == x)
            return mid;

        // If element is smaller than middle
        if (arr[mid] > x)
            return binarysearch1(arr, l, mid - 1, x);

        
        return binarysearch1(arr, mid + 1, r, x);
    }

    // When element is not present in array
    return -1;
}

int binarysearch2(const int *arr, int l, int r, int x)
{
    int mid = l + (r - l) / 2;

    while (arr[mid] != x)
    {
        if (r <= l || r < 0)
            return -1;

        if (arr[mid] > x)
            // If element is smaller than middle
            r = mid - 1;
        else
            
            l = mid + 1;

        mid = l + (r - l) / 2;
    }

    // When element is not present in array
    return mid;
}

/** Test implementations */
void test()
{
    // give function an array to work with
    int arr[] = {2, 3, 4, 10, 40};
    // get size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Test 1.... ");
    // set value to look for
    int x = 10;
    // set result to what is returned from binarysearch
    int result = binarysearch1(arr, 0, n - 1, x);
    assert(result == 3);
    printf("passed recursive... ");
    result = binarysearch2(arr, 0, n - 1, x);
    assert(result == 3);
    printf("passed iterative...\n");

    printf("Test 2.... ");
    x = 5;
    // set result to what is returned from binarysearch
    result = binarysearch1(arr, 0, n - 1, x);
    assert(result == -1);
    printf("passed recursive... ");
    result = binarysearch2(arr, 0, n - 1, x);
    assert(result == -1);
    printf("passed iterative...\n");
}

/** Main function */
int main(void)
{
    test();
    return 0;
}