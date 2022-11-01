#include <iostream>
using namespace std;

int main(){
    
    //ROW COLUMN SAME HERE::
    /*
    int n; 
    cin >> n;

    //creating a 2D array:
    int **arr = new int*[n];

    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }

    //taking input:
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    //taking output:
    cout << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    */


    //ROW COLUMN DIFFRENT HERE::
 
    int row; 
    cout << "row : ";
    cin >> row;

    int col; 
    cout << "col : ";
    cin >> col;

    //creating a 2D array:
    int **arr = new int*[row];

    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    //taking input:
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    //taking output:
    cout << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //releseaing memory:
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }
    delete []arr;

}

//HomeWork : Create Jaggered Array

