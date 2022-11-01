#include<bits/stdc++.h>
using namespace std;

int main(){

   //First In First Out: 

   queue<int>q;
   q.push(10);
   q.push(20);
   q.emplace(30); //Same as push

   q.empty();
   q.size();
 
   q.front();
   q.back();
 
   q.pop(); //Delete first value
 
   queue<int>q2;
   q.swap(q2);


   while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
   }
   
   while (q.size() > 0){
        cout << q.front() << " ";
        q.pop();
   }


}






