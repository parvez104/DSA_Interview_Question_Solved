//🟢🔴🔵 LinerSearch : 

#include <stdio.h>

int linearSearch(int array[], int size, int value)
{
    int flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            printf("Data is found - Index no : %d ", i);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Sorry...!!!");
    }
}


int main()
{
    int array[] = {23, 43, 54, 98, 34, 99, 34, 65, 45, 64, 45};

    int size = sizeof(array) / sizeof(int);

    int value;
    printf("Enter the value you want to Search : ");
    scanf("%d", &value);

    linearSearch(array, size, value);
}
