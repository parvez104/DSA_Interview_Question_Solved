
//🟢🔴🔵 Instertion  at sorted array in last index position :

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

int insertElement(int array[], int size, int ins_number)
{
    array[size] = ins_number;
    size++;
    printf("\nNew size %d\n", size);

    for (int i = 0; i < size; i++)
    {
        printf("%d \t", array[i]);
    }
}

int main()
{
    int array[50], size, ins_number;

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

        printf("\n\nEnter  the number you want to insert in last : ");
        scanf("%d", &ins_number);

        printf("\nThe new element in array with last index : \n");
        insertElement(array, size, ins_number);
    }
}
