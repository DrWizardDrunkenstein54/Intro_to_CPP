//// Brian Da Cruz
//// 10/31/22
//// P6.6
//// This program includes a function that prints the alternating sum of an input array
//#include <iostream>
//using namespace std;
//
///** This function prints the alternating sum of the numbers in an array
// @param nums is an array containing the numbers
// @param array_size is the size of the array containing the numbes
// @return the alternating sum
//*/
//int alternating_sum(int nums[], int array_size)
//{
//    int current_sum = 0;
//    for (int i = 0; i < array_size; i++)
//    {
//        // If we are at an even index of the array, add the value directly
//        if (i % 2 == 0)
//        {
//            current_sum += nums[i];
//        }
//        // if we are at an odd index of the array, add the negative of the value
//        else // if (i % 2 == 1)
//        {
//            current_sum += (nums[i] * -1);
//        }
//    }
//    return current_sum;
//}
//
//int main()
//{
//    // Print the alternating sum
//    int num_array[10] = {1, 4, 9, 16, 9, 7, 4, 9, 11};
//    cout << alternating_sum(num_array, 10) << endl;
//
//    return 0;
//}
