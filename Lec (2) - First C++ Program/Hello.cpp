#include <iostream>
using namespace std;

int main()
{

    cout << "Hello World!" << endl;
    cout << 2123;

    // Size of Data in C++ :
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;

    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;

    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of boolean : " << sizeof(bool) << endl;

    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName;

    // Type your full name: John Doe
    // Your name is: John Doe

    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;
  




    return 0;
}
