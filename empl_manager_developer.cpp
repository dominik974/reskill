/*
    Single Responsibility Principle (SRP): The Employee class is responsible for both displaying employee information and calculating bonuses. These are separate concerns.

    Open/Closed Principle (OCP): The calculateBonus method in the Developer class modifies the behavior of the base class Employee rather than extending it.

    Liskov Substitution Principle (LSP): The Developer class introduces a new method calculateBonus that is not present in the base class Employee, violating LSP.

*/

#include <iostream>
#include <vector>

class Displayable
{
public:
    virtual void displayInfo() const = 0;
};
class BonusCalculable
{
public:
    virtual double calculateBonus() const = 0;
};

class Employee : public Displayable, public BonusCalculable
{
public:
    Employee(const std::string &name, double salary)
        : name(name), salary(salary) {}

    void displayInfo() const override
    {
        std::cout << "Name: " << name << ", Salary: " << salary << std::endl;
    }

    double calculateBonus() const override
    {
        return salary * 0.1; // Default bonus calculation
    }

private:
    std::string name;
    double salary;
};

class Manager : public Employee
{
public:
    Manager(const std::string &name, double salary, int teamSize)
        : Employee(name, salary), teamSize(teamSize) {}

    void displayInfo() const override
    {
        std::cout << "Manager - ";
        Employee::displayInfo();
        std::cout << "Team Size: " << teamSize << std::endl;
    }

    double calculateBonus() const override
    {
        return Employee::calculateBonus() + teamSize * 100.0; // Manager-specific bonus calculation
    }

private:
    int teamSize;
};

class Developer : public Employee
{
public:
    Developer(const std::string &name, double salary, std::string programmingLanguage)
        : Employee(name, salary), programmingLanguage(programmingLanguage) {}

    void displayInfo() const override
    {
        std::cout << "Developer - ";
        Employee::displayInfo();
        std::cout << "Programming Language: " << programmingLanguage << std::endl;
    }

    // Violates Liskov Substitution Principle
    double calculateBonus() const override
    {
        return Employee::calculateBonus() + 500.0; // Developer-specific bonus calculation
    }

private:
    std::string programmingLanguage;
};

void printInfo(const Displayable &displayable)
{
    displayable.displayInfo();
}

int main()
{
    Manager manager("John Doe", 50000.0, 5);
    Developer developer("Jane Smith", 60000.0, "C++");

    printInfo(manager);
    printInfo(developer);

    std::vector<const BonusCalculable *> employees = {&manager, &developer};

    return 0;
}
