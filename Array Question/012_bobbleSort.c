//🟢🔴🔵 Bobble sort :

#include <stdio.h>
#include <conio.h>

int ascendingBobbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int flag = 0;

        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }
}



int descendingBobbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int flag = 0;

        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }
}




int showArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", array[i]);
    }
}




int main()
{
    int array[] = {23, 43, 54, 98, 34, 99, 34, 65, 64, 45};

    int size = sizeof(array) / sizeof(int);

    printf("\nAscending Order : \n");
    ascendingBobbleSort(array, size);
    showArray(array, size);

    printf("\nDescending Order : \n");
    descendingBobbleSort(array, size);
    showArray(array, size);

    getch();
}
