#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1);
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void bubbleSortAdaptive(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return;
        }
    }
}

int main(){
    // int A[] = {12, 54, 65, 7, 23, 9};
    int A[100], b;
    printf("entre the length of array\n");
    scanf("%d",&b);

    printf("Enter the elements of the array\n");
    for(int i = 0;i<=b-1;i++){
        scanf("%d",&A[i]);
    }
    // int A[] = {1, 2, 3, 4, 5, 6};

    printArray(A, b); // Printing the array before sorting
    bubbleSort(A, b); // Function to sort the array
    printArray(A, b); // Printing the array before sorting
    return 0;
}
