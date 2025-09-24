#include "rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(double l, double w) : length(l) {
    setLength(l);
    setWidth(w);
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setLength(double l) {
    if (l > 0) {
        length = l;
    } else {
        length = 1.0; // Default value
    }
}

void Rectangle::setWidth(double w) {
    if (w > 0) {
        width = w;
    } else {
        width = 1.0; // Default value
    }
}

double Rectangle::area() const {
    return length * width;
}
double Rectangle::perimeter() const {
    return 2 * (length + width);
}
void Rectangle::display() const {
    cout << "Length: " << length << ", Width: " << width
         << ", Area: " << area() << ", Perimeter: " << perimeter() << endl;
}