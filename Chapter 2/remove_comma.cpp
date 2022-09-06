// Brian Da Cruz
// 9/6/22
// lab 3, P2.18
// This program takes in a number with a single comma in it as input and prints out the number without the comma


#include <iostream>
using namespace std;

int main()
{

    // Read in number as input
    string number;
    cin >> number;

    // Print out the numbers that show up before the comma and after the comma
    cout << number.substr(0, number.length() - 4) << number.substr(number.length() - 3) << endl;


    return 0;
}
