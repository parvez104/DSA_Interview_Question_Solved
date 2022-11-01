#include<bits/stdc++.h>
using namespace std;

int main(){

    //Map Declaration: Key Value Pair

    map<int, int> maping = { {30, 300}, {70, 700}, {90, 900} };

    maping.insert({10, 100});

    maping[20] = 200;
    maping[20] = 2000; //Update or replace value
    maping[20] = 2000 + 20; //Update or replace value


    cout << maping.at(20) << endl;
    cout << maping[30] << endl;
    cout << maping.size() << endl;


    for(auto values: maping){
        cout << values.first << " : " << values.second << endl;
    }


    map<int, int>::iterator point;
    for(point = maping.begin(); point != maping.end(); point++){
         cout << point -> first << " : " << point -> second << ", ";
    }


    maping.max_size();
    maping.clear();


    map<string, int> name_and_roll;
    name_and_roll.insert({"Talha", 39});
    name_and_roll.insert({"Jamna", 49});
    name_and_roll.insert({"Skail", 49});
    name_and_roll.insert({"Jabks", 29});


    name_and_roll.erase("Talha");
    for(auto value: name_and_roll) cout << value.first << " : " << value.second << endl;


    auto bound = name_and_roll.upper_bound("Jamna");
    // auto bound = name_and_roll.lower_bound("Jamna");
    cout << bound -> first << " " << bound -> second << endl;


    // count();
    // find();
    // swap();
    // operator '='

}



 