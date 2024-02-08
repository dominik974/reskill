#include <iostream>
using namespace std;

// This program is supposed to greet people according to how well we know them
// It works, but we can't extend it without modifying it.
// This is against the "Open-Closed Principle" ("Classes should be open for extension, but closed for modification")

class Greeter
{
public:
    virtual string greet() = 0;
};

class Formal : public Greeter
{
public:
    string greet() override
    {
        return "Good evening, sir.";
    }
};

int main()
{
    Formal formalperson;
    cout << formalperson.greet() << endl;

    return 0;
}
