//Bubble Sort

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
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j + 1] < array[j])
            {
                int t = array[j];
                array[j] = array[j + 1];
                array[j + 1] = t;
            }
        }
    }
    printf("Sorted array : ");
    for (int i = 0; i < n ; i++)
    {
        printf("%d ", array[i]);
    }
}