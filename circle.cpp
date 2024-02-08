#include <iostream>

class Circle
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }
    Circle()
    {
        radius = 0.0;
    }
    void setDimensions(double r)
    {
        radius = r;
    }
    double CalculateArea()
    {
        return radius * radius * 3.1415926535;
    }
};

int main()
{
    // Create a Circle object with a radius
    Circle circle(5.0);

    // Calculate and print the area of the circle
    double area = circle.CalculateArea();
    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
}
