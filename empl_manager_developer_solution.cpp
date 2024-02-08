/*
    Displayable and BonusCalculable interfaces represent separate responsibilities.
    The Employee class inherits from both interfaces, separating the concerns.
    Functions (printInfo and calculateTotalBonus) are implemented acc. to interfaces -> Open/Closed Principle.
  */

#include <iostream>
#include <vector>

// Interface for displaying information
class Displayable {
public:
    virtual void displayInfo() const = 0;
    virtual ~Displayable() = default;
};

// Interface for calculating bonuses
class BonusCalculable {
public:
    virtual double calculateBonus() const = 0;
    virtual ~BonusCalculable() = default;
};

// Base class representing an employee
class Employee : public Displayable, public BonusCalculable {
public:
    Employee(const std::string& name, double salary)
        : name(name), salary(salary) {}

    void displayInfo() const override {
        std::cout << "Name: " << name << ", Salary: " << salary << std::endl;
    }

    double calculateBonus() const override {
        return salary * 0.1; // Default bonus calculation
    }

private:
    std::string name;
    double salary;
};

// Manager class implementing interfaces
class Manager : public Employee {
public:
    Manager(const std::string& name, double salary, int teamSize)
        : Employee(name, salary), teamSize(teamSize) {}

    void displayInfo() const override {
        std::cout << "Manager - ";
        Employee::displayInfo();
        std::cout << "Team Size: " << teamSize << std::endl;
    }

    double calculateBonus() const override {
        return Employee::calculateBonus() + teamSize * 100.0; // Manager-specific bonus calculation
    }

private:
    int teamSize;
};

// Developer class implementing interfaces
class Developer : public Employee {
public:
    Developer(const std::string& name, double salary, std::string programmingLanguage)
        : Employee(name, salary), programmingLanguage(programmingLanguage) {}

    void displayInfo() const override {
        std::cout << "Developer - ";
        Employee::displayInfo();
        std::cout << "Programming Language: " << programmingLanguage << std::endl;
    }

    double calculateBonus() const override {
        return Employee::calculateBonus() + 500.0; // Developer-specific bonus calculation
    }

private:
    std::string programmingLanguage;
};

// Function to print information using the Displayable interface
void printInfo(const Displayable& displayable) {
    displayable.displayInfo();
}

// Function to calculate bonuses using the BonusCalculable interface
double calculateTotalBonus(const std::vector<const BonusCalculable*>& employees) {
    double totalBonus = 0.0;
    for (const auto& employee : employees) {
        totalBonus += employee->calculateBonus();
    }
    return totalBonus;
}

int main() {
    Manager manager("John Doe", 50000.0, 5);
    Developer developer("Jane Smith", 60000.0, "C++");

    // Using the Displayable interface
    printInfo(manager);
    printInfo(developer);

    // Using the BonusCalculable interface
    std::vector<const BonusCalculable*> employees = { &manager, &developer };
    double totalBonus = calculateTotalBonus(employees);

    std::cout << "Total bonus of employees: " << totalBonus << std::endl;

    return 0;
}
