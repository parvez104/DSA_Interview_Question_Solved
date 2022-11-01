#include<bits/stdc++.h>
using namespace std;

int main(){

   //First In First Out: here we can define priority of values:


   priority_queue<int>pq; // Greater to Smaller
   // priority_queue<int, vector<int>, greater<int> >pq; // Smaller to Greater


   pq.push(10);
   pq.emplace(30);


   pq.empty();
   pq.size();

    
   cout << pq.top() << endl; //most greater value


   while (pq.size() > 0){
        cout << pq.top() << " ";
        pq.pop();
   }
   

   priority_queue<int>pq2;
   pq.swap(pq2);

}
