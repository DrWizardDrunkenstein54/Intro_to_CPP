//// Brian Da Cruz
//// 9/15/22
//// P3.10
//// This program translates a letter grade with a sign into a numerical grade
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//
//    // Read in input
//    string letter_grade;
//    cin >> letter_grade;
//
//
//    // store a numerical grade which will be modified and printred
//    double numerical_grade = 0.0;
//
//    // Assign a point value based on the letter grade
//    if (letter_grade.substr(0, 1) == "A")
//    {
//        numerical_grade = 4.0;
//    }
//    else if (letter_grade.substr(0, 1) == "B")
//    {
//        numerical_grade = 3.0;
//    }
//    else if (letter_grade.substr(0, 1) == "C")
//    {
//        numerical_grade = 2.0;
//    }
//    else if (letter_grade.substr(0, 1) == "D")
//    {
//        numerical_grade = 1.0;
//    }
//    else
//    {
//        numerical_grade = 0.0;
//    }
//
//
//    // Only modify the numerical grade if it has a + or - sign.
//    if (letter_grade.length() > 1)
//    {
//        // Add 0.3 to the numerical grade if the grade isn't an A+ or F+
//        if (letter_grade.substr(1, 1) == "+" && numerical_grade != 0.0 && numerical_grade != 4.0)
//        {
//            numerical_grade += 0.3;
//        }
//        // Subtract 0.3 if the numerical grade isn't an F-
//        if (letter_grade.substr(1, 1) == "-" && numerical_grade != 0.0)
//        {
//            numerical_grade -= 0.3;
//        }
//    }
//
//    // Print the answer
//    cout << numerical_grade << endl;
//
//
//
//}
