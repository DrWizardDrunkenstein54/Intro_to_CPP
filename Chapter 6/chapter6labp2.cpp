//// Brian Da Cruz
//// 10/31/22
//// P6.27
//// This program merges two vectors' elements into one vector
//#include <iostream>
//#include <vector>
//using namespace std;
//
///** This function merges two vectors' values
// @param a is a vector containing values
// @param b is a vecetor containing values
// @return a vector that contains the values merged from vector a and b
//*/
//vector<int> append(vector<int> a, vector<int> b)
//{
//    vector<int> merged_vector;
//
//    int a_pointer = 0, b_pointer = 0;
//    for (int i = 0; i < a.size() + b.size(); i++)
//    {
//        // append from vector a
//        if (i % 2 == 0)
//        {
//            // if there are still values to append from vector a
//            if (a_pointer < a.size())
//            {
//                merged_vector.push_back(a[a_pointer]);
//                a_pointer++;
//            }
//            else // if there are no values left from vector a
//            {
//                // append rest of values from vector b
//                for (int j = b_pointer; j < b.size(); j++)
//                {
//                    merged_vector.push_back(b[j]);
//                }
//            }
//        }
//        // append from vector b
//        else // if (i % 2 == 1)
//        {
//            // if there are still values to append from vector b
//            if (b_pointer < b.size())
//            {
//                merged_vector.push_back(b[b_pointer]);
//                b_pointer++;
//            }
//            else // if there are no values left from vector b
//            {
//                // append the rest of values from vector a
//                for (int j = a_pointer; j < a.size(); j++)
//                {
//                    merged_vector.push_back(a[j]);
//                }
//            }
//        }
//    }
//
//    // return merged vector containing values from a and b
//    return merged_vector;
//}
//
//int main()
//{
//    // Print the balance
//    vector<int> v1 = {1, 3, 5};
//    vector<int> v2 = {2, 4, 6};
//
//    vector<int> v3 = append(v1, v2);
//    for (int i = 0; i < v3.size(); i++)
//    {
//        cout << v3[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//
