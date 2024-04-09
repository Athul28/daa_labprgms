//Linear search

#include<stdio.h>
#include<conio.h>

int main(){
    int array[100],n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int key;
    printf("Enter the element to be searched : ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(key==array[i]){
            printf("Element found at position %d",i);
            return 0;
        }
    }
    printf("Element not present");
    return 0;
}