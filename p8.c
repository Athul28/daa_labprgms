// Quick sort - O(n^2)

#include <stdio.h>
#include <conio.h>
void quicksort(int[10], int, int);
void main()
{
    int a[20], n, i;
    printf("Enter size of the array:\n");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    printf("Sorted elements:\n ");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    getch();
}
void quicksort(int a[10], int first, int last)
{
    int pivot, j, temp, i;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (a[i] <= a[pivot] && i < last)
                i++;
            while (a[j] > a[pivot])
                j--;
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        quicksort(a, first, j - 1);
        quicksort(a, j + 1, last);
    }
}