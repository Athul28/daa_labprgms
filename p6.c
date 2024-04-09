//Insertion sort - comparint with previous element and conitinuing comparing and movnig untill it is in the right place


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
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && array[j]<array[j-1]){
            int t=array[j];
            array[j]=array[j-1];
            array[j-1]=t;
            j--;
        }
    }
    printf("Sorted array : ");
    for (int i = 0; i < n ; i++)
    {
        printf("%d ", array[i]);
    }
}