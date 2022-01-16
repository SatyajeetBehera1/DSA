#include <stdio.h>
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