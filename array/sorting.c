#include<stdio.h>    
void main ()    
{    
    int i, j, temp, l;     
    int a[100];// = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};     
    printf("Enter the size of array\n");
    scanf("%d",&l);
    printf("Enter the element of array\n");
    for(int z = 0;z<l;z++){
        scanf("%d",&a[z]);
    }
    for(i = 0; i<l; i++)    
    {    
        for(j = i+1; j<l; j++)    
        {    
            if(a[j] > a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    printf("Printing Sorted Element List \n");    
    for(i = l-1; i>=0;i--)    
    {    
        printf(" %d ",a[i]);    
    }    
}  
