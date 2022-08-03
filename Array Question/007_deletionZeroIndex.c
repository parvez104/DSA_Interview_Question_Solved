//🟢🔴🔵 Deletion at shorted array in first position :

#include <stdio.h>

int getArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
}

int showArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", array[i]);
    }
}

int deleteElement(int array[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }

    size--;
    printf("\nNew size %d\n", size);

    for (int i = 0; i < size; i++)
    {
        printf("%d \t", array[i]);
    }
}


int main()
{
    int array[50], size;

    printf("Enter the Size of Array : ");
    scanf("%d", &size);

    if (size > 50)
    {
        printf("\nOverflow size");
    }
    else
    {
        printf("Enter the %d value of array :\n", size);
        getArray(array, size);

        printf("\nThe %d value of array :\n", size);
        showArray(array, size);

        printf("\nAfter Deletion First value : ");
        deleteElement(array, size);
    }
}
