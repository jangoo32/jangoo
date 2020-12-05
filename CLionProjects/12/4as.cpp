//mohammed adam
// class 2
// computer
/* starting via including input-output stream 
 * that handles read and write operations, and cstring 
 * to keep character data in a cstringData object */

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
char shape[20];
float area, rib, circumference, rib1, apothem, rib2, rib3, height, width, length, base, radius, diameter, angle;
double const pi = 3.14159;
int main()
{
	loop:
	cout << "Shapes: \nTriangle, Rectangle, Square, Circle, Polygon, Ellipse" << endl;
	cout << "\nChoose your geometric shape: ";
	cin >> shape;
	if (strcmp(shape, "Triangle") == 0){// the triangle claculations
		cout << "Enter Triangle's base length: ";
		cin >> base;
		cout << "Enter Triangle's height length: ";
		cin >> height;
		cout << "Enter the first side Triangle's length: ";
		cin >> rib1;
		cout << "Enter the sencond side Triangle's length: ";
		cin >> rib2;
		cout << "Enter the third side Triangle's length: ";
		cin >> rib3;
		area = 0.5 * base * height;
		circumference = rib1 + rib2 + rib3;
	}
	else if (strcmp(shape, "Rectangle") == 0){// the rectangle claculations
		cout << "Enter Rectangle's width value: ";
		cin >> width;
		cout << "Enter Rectangle's height value: ";
		cin >> height;
		area = width * height;
		circumference = 2 * (height + width);
	}
	else if (strcmp(shape, "Squire") == 0){// the square claculations
		cout << "\nYou have choosed Square!\n\n";
		cout << "Enter side Square's length value: ";
		cin >> length;
		area = length * length;
		circumference = 4 * length;
	}
	else if (strcmp(shape, "Circle") == 0){ // the circle claculations
		cout << "\nYou have choosed Circle!\n\n";
		cout << "Enter Circle's radius value: ";
		cin >> radius;
		area = pi * radius * radius;
		circumference = 2 * pi * radius;
	}
	else if (strcmp(shape, "Polygon") == 0){// the polygon claculations
		cout << "\nYou have choosed Polygon!\n\n";
		cout << "Enter Polygon's apothem value: ";
		cin >> apothem;
		cout << "Enter Polygon's side length value: ";
		cin >> length;
		area = 0.5 * apothem * 5 * length;
		circumference = length * 5;
	}
	else if (strcmp(shape, "Ellipse") == 0){// the ellipse claculations
		double maj,min;
		cout << "\nYou have choosed Ellipse!\n\n";
		cout << "Enter Ellipse's Major Axis value: ";
		cin >> maj;
		cout << "Enter Ellipse's Minor Axis value: ";
		cin >> min;
		area = pi * maj * min;
		circumference = 2 * pi * sqrt(((maj * maj)+ (min * min)) * 0.5);
	}
	else {
		cout << "\nWrong choice\n";
		goto loop;
	}
	cout << "\n" << shape << "Area is: " << area << endl;
	cout << shape << "Circumference is: " << circumference << endl;
	return 0;
}
