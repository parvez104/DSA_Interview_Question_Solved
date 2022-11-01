#include<bits/stdc++.h>
using namespace std;

int main(){
    

    list<int>li = {1, 2, 4, 5, 6, 7, 7, 7, 8, 9, 9};

 
    li.push_back(69);
    li.push_front(69);


    cout << li.front() << endl;
    cout << li.back() << endl;


    li.pop_back();
    li.pop_front();


    li.size();
    li.empty();


    for(auto value: li){
        cout << value << " ";
    }


    list<int>::iterator value;
    value = li.begin();
    advance(value, 3);

    // li.insert(value, 1, 15);
    // li.insert(value, 0, 15);
    li.insert(value, 3, 15);


    li.clear();


    list <int> classRoll = {23, 45, 56, 34, 66, 35, 56, 56, 90};
    list <int> baseRoll = {2, 4, 7, 8, 9, 3, 1, 9, 4};
    
    //delete single value
    /*
    list <int> ::iterator value;
    value = classRoll.begin();
    advance(value, 3);
    classRoll.erase(value);
    */

    //delete multiple value
    list <int> ::iterator point1, point2;
    point1 = classRoll.begin();
    point2 = classRoll.begin();
    advance(point2, 3);
    classRoll.erase(point1, point2);


    classRoll.remove(56); //Remove specific value or values
    classRoll.sort();


    classRoll.reverse();
    classRoll.unique(); // Do not hold equal values side by side


    classRoll.swap(baseRoll); //Swap two list of elements
    classRoll.merge(baseRoll); //Now baseRoll is empty


}

