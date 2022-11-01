#include<bits/stdc++.h>
using namespace std;

int main(){


    set<int> randomInt = {1,3,4,5,6,7,8,8,88}; //only unique values

    randomInt.insert(100);
    randomInt.emplace(87);


    cout << randomInt.max_size() << endl;
    cout << randomInt.size() << endl;


    randomInt.begin();
    randomInt.end();


    randomInt.empty();
    randomInt.clear();


    randomInt.erase(100); // targeting-value

    auto value = randomInt.begin(); // targeting-index
    advance(value, 3);
    randomInt.erase(value);
    

    auto findingIndex = randomInt.find(16);

    if(findingIndex != randomInt.end()){
        cout << "FOUND !!" << endl;
    }else{
        cout << "NOT FOUND !!" << endl;
    }


    int CountOrNot = randomInt.count(4); //if exist its return 1, otherwise 0;
    cout << CountOrNot << endl;


    // auto bound = randomInt.lower_bound(318);
    auto bound = randomInt.upper_bound(2);

    if(bound == randomInt.end()){
        cout << "Out of range" << endl;
    }else{
        cout << "Bound : " << *bound << endl;
    }


    set<int> randomInt2; 
    randomInt.swap(randomInt2);
    

    set<int>randomNumber = randomInt; //CopySet
    
    for(auto element: randomNumber) 
    cout << element << " ";

}

