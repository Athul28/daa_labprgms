// Binary search

#include <stdio.h>
#include <conio.h>

int binary_search(int array[], int n, int key)
{
    int b = 0, e = n - 1;
    while (b <= e)
    {
        int m = (b + e) / 2;
        if (array[m] == key)
        {
            return m;
        }
        else if (array[m] < key)
        {
            b = m + 1;
        }
        else if (array[m] > key)
        {
            e = m - 1;
        }
    }
}

int main()
{
    int array[100], n, key;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the sorted array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d", &key);
    int pos = binary_search(array, n, key);
    printf("Entered element is found at position : %d", pos);
    return 0;
}