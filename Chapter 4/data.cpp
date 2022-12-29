//// Brian Da Cruz
//// 9/26/22
//// P4.8
//// This program takes n float numbers and prints their averages, smallest and largest of the values, and their range.
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    // Read in number of inputs
//    int n;
//    cin >> n;
//
//
//    // Define variables
//    float min = 0, max = 0;
//    float average = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        // Read in new number
//        float num;
//        cin >> num;
//
//
//        // If it is the first iteration, min and max are initially set to num since there is no other number present so far
//        if (i == 0)
//        {
//            min = num;
//            max = num;
//        }
//        else
//        {
//            // Update min
//            if (num < min)
//            {
//                min = num;
//            }
//            // Update max
//            if (num > max)
//            {
//                max = num;
//            }
//        }
//        // contribute to average
//        average += num;
//    }
//
//    // Print outputs
//    cout << "Average is " << average / (float) n << endl;
//    cout << "Smallest value is " << min << endl;
//    cout << "Largest value is " << max << endl;
//    cout << "Range is " << max - min << endl;
//
//    return 0;
//
//}
