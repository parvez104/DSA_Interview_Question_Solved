#include<iostream>
using namespace std;

int selectionSort(int array[], int size){

    for (int i = 0; i < size - 1; i++){

        int minValue = i;

        for(int j = i + 1; j < size; j++){
            
            if(array[j] < array[minValue]) minValue = j;
        }
        
        if(minValue != i) swap(array[i], array[minValue]);
    }
}


int showArray(int array[], int size){
    for (int i = 0; i < size; i++)
        cout<< array[i] << " " ;
}

int main(){

    int array[] = {3, 2, 1, 9, 8}; 
    int size = sizeof(array) / sizeof(int);

    selectionSort(array, size);
    showArray(array, size);
}

