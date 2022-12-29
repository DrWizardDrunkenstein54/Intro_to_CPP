//// Brian Da Cruz
//// 10/18/22
//// P5.30
//// This program prints the number of digits in a number
//
//#include <iostream>
//using namespace std;
//
///** This function takes in an integer num as input and returns the number of digits in num
//@param num is the current number we are trying to find the number of digits of
//@return the number of digits of a number num by recursively adding 1 for the current digit and checking the number divided by 10
//*/
//int digits(int num)
//{
//    // if the number is less than 10, it has 1 digit
//    if (num < 10)
//        return 1;
//    // print 1 for the current digit and add the remaining digits from the rest of the number which is calculated by dividing the original number by 10
//    return 1 + digits(num / 10);
//}
//
//int main()
//{
//    // Print the number of digits of the input
//    cout << digits(19239) << endl;
//    return 0;
//}
