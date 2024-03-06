#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double pi = 3.14;

class Area {
public:
    double height;
    double width;
};

class Rectangle : public Area { //дочірній клас Rectangle
public:
    Rectangle(double h, double w) {
        height = h;
        width = w;
    }

    double area() { //площа для прямокутника
        return height * width;
    }
};

class Isosceles : public Area { 
public:
    Isosceles(double h, double w) {
        height = h;
        width = w;
    }
 
    double area() { //площа для рівнобедренного трикутника
        return (width / 4) * sqrt(4 * height * height + width * width);
    }
};

class Cylinder : public Area {
public:
    Cylinder(double h, double r) {
        height = h;
        width = r * 2; // діаметр 
    }

    double surface_area() { //площа циліндра 
        double r = width / 2;
        return 2 * pi * r * r + pi * width * height;
    }
};

int main() {
    Rectangle rect(10, 7); 
    cout << "Rectangle Area: " << rect.area() << endl;

    Isosceles iso(10, 7);
    cout << fixed << setprecision(2) << "Isosceles Triangle Area: " << iso.area() << endl;

    Cylinder cyl(4, 3);
    cout << "Cylinder Surface Area: " << cyl.surface_area() << endl;

    return 0;
}
