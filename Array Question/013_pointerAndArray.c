//🟢🔴🔵 Pointer and Array :

#include <stdio.h>

int getArrayWithPointer(int *base, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Enter index %d value  : ", i);
        scanf("%d", base + i);
    }
}


int showArrayWithPointer(int *base, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("index %d : %d \n", i, *(base + i));
    }
}



int main()
{
    int array[] = {23, 43, 54, 98, 34, 99, 34, 65, 45, 64, 45};
    int size = sizeof(array) / sizeof(int);
    int *arr_pointer = array;

    printf("%d \n", array);       // base adddress
    printf("%d \n", &array);      // base adddress
    printf("%d \n", arr_pointer); // base adddress

    printf("%d \n", &arr_pointer); // pointer address
    // array++; not allow, base address can'nt be changeable

    printf("%d \n",  array[2]);           // value = 54
    printf("%d \n", *(array + 2));       // value = 54
    printf("%d \n", *(arr_pointer + 2)); // value = 54

    printf("%d \n\n", *array + 2); // value = 23 + 2 => 25

    int pointerArray[20];
    getArrayWithPointer(pointerArray, 5);
    showArrayWithPointer(pointerArray, 5);

}
