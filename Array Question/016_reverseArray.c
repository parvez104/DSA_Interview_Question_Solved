// Iterative C program to reverse an array

#include <stdio.h>

int reverseArray(int array[], int end)
{
    int start = 0;
    int temp;
    while (start < end)
    {
        temp = array[start];
        array[start] = array[end - 1];
        array[end - 1] = temp;

        start++;
        end--;
    }
}

int show(int array[], int length)
{
    for (int i = 0; i < length; i++)
        printf("%d\t", array[i]);
}

int main()
{
    int array[] = {20, 30, 40};
    int end = sizeof(array) / sizeof(int);

    reverseArray(array, end);
    show(array, end);
    return 0;
}
