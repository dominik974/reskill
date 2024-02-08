#include <iostream>
using namespace std;

class Imolting
{
    virtual void molt() = 0;
};

class ISwimming
{
public:
    virtual void swim() = 0;
};

class IFlying
{
    virtual void fly() = 0;
};

class Eagle : public Imolting, IFlying
{
public:
    string currentLocation;
    int numberOfFeathers;
    Eagle(int initialFeatherCount)
    {
        numberOfFeathers = initialFeatherCount;
    }
    void fly() override
    {
        currentLocation = "in the air";
    }
    void molt() override
    {
        numberOfFeathers -= 1;
    }
};

class Penguin : public Imolting, ISwimming
{
public:
    string currentLocation;
    int numberOfFeathers;
    Penguin(int initialFeatherCount)
    {
        numberOfFeathers = initialFeatherCount;
    }

    void molt() override
    {
        numberOfFeathers -= 1;
    }

    void swim() override
    {
        currentLocation = "in the water";
    }
};

int main()
{
    return 0;
}
