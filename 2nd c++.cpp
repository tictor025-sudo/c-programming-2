#include <iostream>
#include <string>
#include <cmath>   // for M_PI

using namespace std;

// (i) Base class Shape
class Shape {
protected:
    string color;   // protected data member

public:
    Shape(string c = "") {   // constructor with default
        color = c;
    }

    void setColor(string c) {
        color = c;
    }

    string getColor() {
        return color;
    }
};

// (ii) Derived class Rectangle
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w, string c) : Shape(c) {
        length = l;
        width = w;
    }

    float area() {
        return length * width;
    }
};

// (iii) Derived class Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r, string c) : Shape(c) {
        radius = r;
    }

    float area() {
        return M_PI * radius * radius;
    }
};

// (iv) Main function
int main() {
    Rectangle rect(10, 5, "Red");
    Circle circ(7, "Blue");

    cout << "Rectangle Color: " << rect.getColor() << endl;
    cout << "Rectangle Area: " << rect.area() << endl;

    cout << "Circle Color: " << circ.getColor() << endl;
    cout << "Circle Area: " << circ.area() << endl;

    return 0;
}