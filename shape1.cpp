/******************************************************************************
Brief Description: Exercise to rework code to satisfy SOLID
******************************************************************************/
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

class Shape
{
public:
    virtual float getArea() = 0;
    // virtual ~Shape() {}
};

class Print
{
    virtual void print(float value) = 0;
    // virtual ~Print();
};

class Style_A : public Print
{
public:
    void print(float value)
    {
        cout << "A: The area is " << value << endl;
    }
};

class Style_B : public Print
{
public:
    void print(float value)
    {
        cout << "B: The given shape has an area of " << value << endl;
    }
};

class Style_C : public Print
{
public:
    void print(float value) { cout << "C: Answer: " << value << endl; }
};

class Rectangle : public Shape
{
private:
    float width, height;

public:
    Rectangle(float width, float height) : width(width), height(height) {}
    float getArea()
    {
        return (width * height);
    }
};

class Square : public Shape
{
private:
    float width, height;

public:
    Square(float width) : width(width) {}

    float getArea()
    {
        return width * width;
    }
};

class Triangle : public Shape
{
private:
    float base, height;

public:
    Triangle(float base, float height) : base(base), height(height) {}

    float getArea()
    {
        return 0.5 * base * height;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float radius) : radius(radius) {}
    float getArea()
    {
        return 3.14159 * radius * radius;
    }
};

int main(void)
{

    Style_A styleA;
    Style_B styleB;
    Style_C styleC;

    Rectangle shape1(10, 5);
    Square shape2(7);
    Triangle shape3(10, 5);
    Circle shape4(4);

    styleA.print(shape1.getArea());
    styleB.print(shape2.getArea());
    styleC.print(shape3.getArea());
    styleA.print(shape4.getArea());
}

/*
A: The area is 50
B: The given shape has an area of 49
C: Answer: 25
A: the area is 50.2655
*/
