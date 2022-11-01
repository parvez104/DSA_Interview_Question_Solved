#include<bits/stdc++.h>
using namespace std;

int main(){


    multiset<int> randomInt = {10,3,4,5,6,7,8,8,88,88};

    randomInt.insert(98);

    randomInt.size();
    randomInt.max_size();

    randomInt.begin(); 
    randomInt.end();

    randomInt.erase(88); //use iterator to point spcific index.

    randomInt.clear();

    auto value = randomInt.find(8);

    if(value == randomInt.end()){
        cout << "Not, found !" << endl;
    }else{
        cout << "Found !!" << endl;
    }

    int presentNumber  = randomInt.count(8);
    cout << presentNumber << endl;


    auto bound = randomInt.lower_bound(11);
    // auto bound = randomInt.upper_bound(2);
    cout << "bound : " << *bound << endl;

    // emplace();
    // swap();
    // operator '=' 

}


 
