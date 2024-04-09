//Selection sort

#include <stdio.h>
#include <conio.h>

int main()
{
    int array[100], n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for (int i = 0; i < n ; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
    }
    printf("Sorted array : ");
    for (int i = 0; i < n ; i++)
    {
        printf("%d ", array[i]);
    }
}