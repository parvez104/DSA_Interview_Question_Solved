//🟢🔴🔵 BinarySearch :

#include <stdio.h>

int BinarySearch(int array[], int size, int value)
{
    int leftShift = 0, rightShift = size - 1;
    int flag = 0;

    while (leftShift <= rightShift)
    {
        int middle = (leftShift + rightShift) / 2;

        if (array[middle] == value)
        {
            printf("Data is found - Index no : %d ", middle);
            flag = 1;
        }
        else if (array[middle] < value)
        {
            leftShift = middle + 1;
        }
        else
        {
            rightShift = middle - 1;
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

    BinarySearch(array, size, value);
}
