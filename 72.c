#include<stdio.h>

int main()
{
    int n,temp,r;

    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&a[i]);
    }

    printf("Array is: \n");
    printf("[\t");
    for(int i=0; i<n; i++) {
        printf("%d\t",a[i]);
    }
    printf("]\n");


    printf("Enter by how many places you have to rotate the array: ");
    scanf("%d",&r);

    while (r>n) {
        r = r - n;
    }

    int M[n];
    for (int i=0;i<n;i++)
    {
         M[i] = a[(i+r>=n)? r+i-n : r+i];
    }
    
    printf("The Shifted array is: \n");
    printf("[\t");
    for(int i=0; i<n; i++) {
        printf("%d\t",M[i]);
    }
    printf("]");

    return 0;
    

    
}