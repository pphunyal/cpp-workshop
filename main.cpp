#include "rectangle.h"
#include <iostream>
using namespace std;

int main() {
    Rectangle rect(5.0, 3.0);  // Create a rectangle
    rect.display();            // Display its properties

    rect.setLength(7.0);      // Modify length
    rect.setWidth(4.0);       // Modify width
    rect.display();            // Display updated properties

    return 0;
}