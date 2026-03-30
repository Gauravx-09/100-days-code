#include <stdio.h>

/* Recursive function to find sum of array elements */
int sum(int a[], int n)
{
    if (n == 0)
        return 0;
    else
        return a[n - 1] + sum(a, n - 1);
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};   // digits entered directly
    int n = 5;

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nSum of array elements = %d\n", sum(a, n));

    return 0;
}
