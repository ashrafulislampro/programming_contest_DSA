#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    int *arr;
    printf("Number of elements to be entered : ");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));
    printf("Enter %d numbers : \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The numbers of entered are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}