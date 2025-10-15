#include <stdio.h>

int main()
{
    int n, num;
    printf("Enter the number of elements you want in your array: ");
    scanf("%d", &n);
    int a[n], temp[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter the index of the element you want to add 10 in  your array: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (num == i)
        {
            a[i] += 10;
        }
    }

    printf("New array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}