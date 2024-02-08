#include <iostream>

class Shape
{
private:
public:
    virtual double getArea() = 0;
};

class Cricle : public Shape
{
private:
    double radius;

public:
    Cricle(double r) : radius(r) {}
    double getArea() override
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Cricle kreis(5);
    double flaeche = kreis.getArea();
    std::cout << "Flaeche:" << flaeche;
}
