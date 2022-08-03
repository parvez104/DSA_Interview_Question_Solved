
//🟢🔴🔵 Deletion at shorted array in specific position :

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



int deleteElement(int array[], int size, int postion)
{
    for (int i = postion - 1; i < size - 1; i++)
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
    int array[50], size, postion;

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

        printf("\nEnter the postion : ");
        scanf("%d", &postion);

        if (postion <= 0 || postion >= size + 1)
        {
            printf("Invalid Postion");
        }
        else
        {
            printf("\nAfter Deletion : ");
            deleteElement(array, size, postion);
        }
    }
}
