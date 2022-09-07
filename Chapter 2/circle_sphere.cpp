// Brian Da Cruz
// 9/6/22
// P2.7
// This program uses a constant pi, as well as an inputted radius to calculate the area and circumference of a cirlce with that radius, as well as the volume and surface area of a sphere with that radius

#include <iostream>
using namespace std;

int main()
{

    // Define the constant pi, which is used to calculate area and circumference of a circle
    // and the volume and surface area of a sphere with a certain radius
    const double pi = 3.14;


    // Read in radius as input
    double radius;
    cin >> radius;


    // Calculate Area and Circumferene of a circle with given radius
    double area = pi * radius * radius;
    double circumference = 2 * pi * radius;

    // Calculate Volume and Surface Area of a sphere with given radius
    double volume = (4.0 / 3 ) * pi * radius * radius * radius;
    double surfaceArea = 4 * pi * radius * radius;

    // Report the values calculated
    cout << "Area: " << area << endl << "Circumference: " << circumference << endl << "Volume: " << volume << endl << "Surface Area: " << surfaceArea << endl;


    return 0;
}
