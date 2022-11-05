#include<iostream>
using namespace std;

int ascendingBobbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < size - 1 - i; j++){
            if (array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) break;
    }
}


int descendingBobbleSort(int array[], int size){

    for (int i = 0; i < size - 1; i++){
        int flag = 0;

        for (int j = 0; j < size - 1 - i; j++){
            if (array[j] < array[j + 1]){
                swap(array[j], array[j + 1]);
                flag = 1;
            }
        }
        
        if (flag == 0) break;
    }
}



int showArray(int array[], int size){
    for (int i = 0; i < size; i++)
        cout<< array[i] << " " ;
}


int main(){

    int array[] = {3, 2, 1, 9, 8};
    int size = sizeof(array) / sizeof(int);

    cout <<"Ascending Order : " << endl;
    ascendingBobbleSort(array, size);
    showArray(array, size);

    cout << endl;

    cout <<"Descending Order : " << endl;
    descendingBobbleSort(array, size);
    showArray(array, size);
}
