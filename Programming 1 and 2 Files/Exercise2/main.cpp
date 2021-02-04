/*
 * Write a C++ program that allows the user to select a shape from a menu of 7 options. The
 * program will then query the user for the required dimensions and output the shapes volume and surface
 * area.  The programs menu should include: cubes, spheres, cylinders, right circular cones, ellipsoids,
 * tetrahedrons, exit.
 */

#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

void calcShape(int);

int main()
{
    int userChoice;
    cout << "Please select a shape: " << endl
         << "1) Cube" << endl
         << "2) Sphere" << endl
         << "3) Cylinder" << endl
         << "4) Right Circular Cone" << endl
         << "5) Ellipsoid" << endl
         << "6) Tetrahedron" << endl
         << "7) Exit" << endl;

    cin >> userChoice;

    switch(userChoice)
    {
        case 1:
            calcShape(1);
            break;
        case 2:
            calcShape(2);
            break;
        case 3:
            calcShape(3);
            break;
        case 4:
            calcShape(4);
            break;
        case 5:
            calcShape(5);
            break;
        case 6:
            calcShape(6);
            break;
        case 7:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid input, exiting..." << endl;
            return 0;
    }
}


void calcShape(int shapeID){

    const double PI = 3.1415926;
    double surfaceArea;
    double volume;
    double length;
    double height;
    double width;
    double radius;
    double radiusX;
    double radiusY;
    double radiusZ;

    switch(shapeID)
    {
        case 1:
            //Cube or Rectangular Prism....... Guess it'll work for both.
            cout << "Enter the length of the cube: " << endl;
            cin >> length;
            cout << "Enter the width of the cube: " << endl;
            cin >> width;
            cout << "Enter the height of the cube: " << endl;
            cin >> height;

            volume = length * width * height;
            surfaceArea = ((length*width)*2) + ((height*width)*2) + ((length*height)*2);

            cout << "The volume of the cube is: " << volume << "." << endl
                 << "The surface area is: " << surfaceArea << "." << endl;
            break;
        case 2:
            cout << "Enter the radius of the sphere: " << endl;
            cin >> radius;

            volume = (4.0/3.0)*(PI)*(pow(radius,3));

            surfaceArea = (4)*(PI)*(pow(radius,2));

            cout << "The volume of the sphere is: " << volume << "." << endl
                 << "The surface area is: " << surfaceArea << "." << endl;
            break;
        case 3:
            cout << "Enter the radius of the cylinder: " << endl;
            cin >> radius;
            cout << "Enter the height of the cylinder: " << endl;
            cin >> height;

            volume = (PI)*(pow(radius,2))*(height);
            surfaceArea = ((PI)*(pow(radius,2))*2)+((2*PI*radius)*height);

            cout << "The volume of the cylinder is: " << volume << "." << endl
                 << "The surface area is: " << surfaceArea << "." << endl;
            break;
        case 4:
            cout << "Enter the radius of the right circular cone: " << endl;
            cin >> radius;
            cout << "Enter the height of the right circular cone: " << endl;
            cin >> height;

            volume = (PI)*(pow(radius,2))*(height/3.0);
            surfaceArea = (PI)*radius*(radius+(sqrt(pow(height,2)+pow(radius,2))));

            cout << "The volume of the right circular cone is: " << volume << "." << endl
                 << "The surface area is: " << surfaceArea << "." << endl;
            break;
        case 5:
            cout << "Enter the radius of the ellipsoid on the X axis: " << endl;
            cin >> radiusX;
            cout << "Enter the radius of the ellipsoid on the Y axis: " << endl;
            cin >> radiusY;
            cout << "Enter the radius of the ellipsoid on the Z axis: " << endl;
            cin >> radiusZ;

            volume = (4.0/3.0)*(PI)*radiusX*radiusY*radiusZ;
            surfaceArea = (4*PI)*(pow((((pow((radiusX*radiusY),1.6))+(pow((radiusX*radiusZ),1.6))+(pow((radiusY*radiusZ),1.6)))/3.0),(1/1.6)));

            cout << "The volume of the ellipsoid is: " << volume << "." << endl
                 << "The surface area is: " << surfaceArea << "." << endl;
            break;
        case 6:
            cout << "Enter the length of one side of the tetrahedron: " << endl;
            cin >> length;

            volume = (pow(length,3))/(6.0*sqrt(2));
            surfaceArea = (sqrt(3))*(pow(length,2));

            cout << "The volume of the tetrahedron is: " << volume << "." << endl
                 << "The surface area is: " << surfaceArea << "." << endl;
            break;
    }
}























