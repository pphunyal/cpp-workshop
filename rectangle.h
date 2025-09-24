#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    private:
        double length;
        double width;

    public:
        // Constructor
        Rectangle(double l = 1.0, double w = 1.0);

        // Getters
        double getLength() const;
        double getWidth() const;

        // Setters
        void setLength(double l);
        void setWidth(double w);

        // Utility methods
        double area() const;
        double perimeter() const;

        // Display method
        void display() const;
};

#endif // RECTANGLE_H