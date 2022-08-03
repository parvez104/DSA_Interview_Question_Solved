//🟢🔴🔵 Traversal in array :

#include <stdio.h>
#define ARRAY_SIZE 10

int getArray(int marks[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Student %d marks : ", i + 1);
        scanf("%d", &marks[i]);
    }
}

int showArray(int marks[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Student %d marks : ", i + 1);
        printf("%d \n", marks[i]);
    }
}

int main()
{
    int marks[ARRAY_SIZE];

    printf("\nEnter the %d student marks \n\n", ARRAY_SIZE);
    getArray(marks, ARRAY_SIZE);

    printf("\nThe %d student marks \n\n", ARRAY_SIZE);
    showArray(marks, ARRAY_SIZE);
}


