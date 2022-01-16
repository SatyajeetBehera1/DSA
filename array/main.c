#include<stdio.h>

int linearSearch(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element) {
    int low, mid, high;
    low = 0;
    high = size - 1;
    // Keep searching until low <= high
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            return mid;
        }
        if (arr[mid] < element) {
            low = mid +1;
        } else {
            high = mid -1;
        }
    }
    return -1;

}

int main() {
    // Unsorted array for linear search
    // int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
    // int size = sizeof(arr)/sizeof(int);

    // Sorted array for binary search
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int size = sizeof(arr) / sizeof(int);
    int element = 7;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}


/*
 insert a number in an array
int main()
{
    int a[10] = {1,2,3,4,5},b,c,d,e;
    printf("Enter the position\n");
    scanf("%d",&b);
    printf("enter the number\n");
    scanf("%d",&c);
    printf("the array is\n");
    for(d = 4;d>=b;d--){
        a[d+1] =a[d];
    }
    a[b] = c;
    for(e = 0;e<=5;e++){
        printf("%d\n",a[e]);
    }
    return 0;
}
 */


/*
 * deletion of an element in an array
int main()
{
    int a[10] = {1,2,3,4,5},b,c,d,e;
    printf("Enter the position\n");
    scanf("%d",&b);
    for(d = b;d<=5;d++){
        a[d] =a[d+1];
    }
    printf("the array is\n");
    for(e = 0;e<5;e++){
        printf("%d\n",a[e]);
    }
    return 0;
}

 */