#include <stdio.h>
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
