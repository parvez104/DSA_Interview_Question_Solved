#include<iostream>
using namespace std;

int insertionSort(int array[], int size){

    for (int i = 1; i < size; i++){
        
        int temp = array[i]; 
        int j = i - 1; 

        while(j >= 0 && array[j] > temp){
            array[j + 1] = array[j]; 
            j--; 
        }
        array[j + 1] = temp; 
    }
}

int showArray(int array[], int size){
    for (int i = 0; i < size; i++)
        cout<< array[i] << " " ;
}

int main(){

    int array[] = {3, 2, 1, 9, 8}; 
    int size = sizeof(array) / sizeof(int);
    insertionSort(array, size);
    showArray(array, size);
}
