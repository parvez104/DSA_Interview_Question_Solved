/*
        #
      # #
    # # #
  # # # #
# # # # # 

*/
#include <iostream>
using namespace std;

void alphabetPrinter(int n){

    int i = 1;
    while( i <= n){
        
        int space =  n - i; 
        while(space){
            cout << "  ";
            space--;
        }

        int j = 1;
        while(j <= i){
            cout << " ?";
            j++;
        }cout << endl;

        i++;
    }
}

int main(){
    int n = 4;
    alphabetPrinter(n);
}
