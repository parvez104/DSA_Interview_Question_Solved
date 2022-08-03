//🟢🔴🔵 2D Array with Pointer ::

// https://www.geeksforgeeks.org/pass-2d-array-parameter-c/
// https://www.techiedelight.com/pass-2d-array-function-parameter/


/*
#include<stdio.h>

int main()
{
    int arr[3][4] = {
                        {11,22,33,44},
                        {55,66,77,88},
                        {11,66,77,44}
                    };

    int i, j;

    for(i = 0; i < 3; i++)
    {
        printf("Address of %d th array %u \n",i , *(arr + i));
        for(j = 0; j < 4; j++)
        {
            printf("arr[%d][%d]=%d\n", i, j, *( *(arr + i) + j) );
        }
        printf("\n\n");
    }

    return 0;
}
*/






// 🎯 1...For Static Array ::

#include <stdio.h>
#define M 5
#define N 5
 
// Here the parameter is a static 2D array
void assign(int arr[M][N])        // or, use `arr[][N]`
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            arr[i][j] = i + j;
        }
    }
}
 
// Program to pass the 2D array to a function in C
int main(void)
{
    int arr[M][N];
 
    assign(arr);
 
    // print 2D array
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}








