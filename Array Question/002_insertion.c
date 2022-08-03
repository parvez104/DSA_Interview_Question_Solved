//🟢🔴🔵 Instertion at sorted array in specific position :

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

int insertElement(int array[], int size, int postion, int ins_number)
{
    for (int i = size - 1; i >= postion - 1; i--)
    {
        array[i + 1] = array[i];
    }

    array[postion - 1] = ins_number;
    size++;
    printf("\nNew size %d\n", size);

    for (int i = 0; i < size; i++)
    {
        printf("%d \t", array[i]);
    }
}

int main()
{
    int array[50], size, ins_number, postion;

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

        printf("\n\nEnter  the number you want to insert in array : ");
        scanf("%d", &ins_number);

        printf("\nEnter the postion : ");
        scanf("%d", &postion);

        if (postion <= 0 || postion >= size + 1)
        {
            printf("Invalid Postion");
        }
        else
        {
            printf("\nThe new elemnt in array : ");
            insertElement(array, size, postion, ins_number);
        }
    }
}







