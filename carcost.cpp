#include <iostream>

int inputPurchasePrice();
int inputFuelExpenses(int years);
int inputMaintenanceCosts(int years);
int calculateTotalCosts(int purchase_price, int fuel_costs, int maint_costs);
void displayTotalCost(int purchase_price, int fuel_expenses, int maintenance_costs, int total_costs);
void financingCosts(int price);

int main()
{
    int period = 5;
    std::string financing = "n";

    int purchase_price = inputPurchasePrice();
    int fuel_expenses = inputFuelExpenses(period);
    int maintenance_costs = inputMaintenanceCosts(period);
    int total_costs = calculateTotalCosts(purchase_price, fuel_expenses, maintenance_costs);
    displayTotalCost(purchase_price, fuel_expenses, maintenance_costs, total_costs);

    std::cout << "Should a financing be calculated= (y/n)";
    std::cin >> financing;
    if (financing == "y")
    {
        financingCosts(purchase_price);
    }
    return 0;
}

int inputPurchasePrice()
{
    int price;
    std::cout << "Enter the purchase price: ";
    std::cin >> price;
    return price;
}

int inputFuelExpenses(int years)
{
    int monthly_cost = 0;
    std::cout << "Enter the monthly fuel expenses: ";
    std::cin >> monthly_cost;
    int totalfuelExpenses = monthly_cost * 12 * years;
    return totalfuelExpenses;
}

int inputMaintenanceCosts(int years)
{
    int monthly_cost = 0;
    std::cout << "Enter the monthly maintenance costs: ";
    std::cin >> monthly_cost;
    return monthly_cost * 12 * years;
}

int calculateTotalCosts(int purchase_price, int fuel_costs, int maint_costs)
{
    return purchase_price + fuel_costs + maint_costs;
}

void displayTotalCost(int purchase_price, int fuel_expenses, int maintenance_costs, int total_costs)
{
    std::cout << "\nTotal Cost of Ownership Over 5 Years:\n";
    std::cout << "Purchase Price: " << purchase_price << "\n";
    std::cout << "Fuel Costs: " << fuel_expenses << "\n";
    std::cout << "Maintenance Costs: " << maintenance_costs << "\n";
    std::cout << "\nTotal Costs: " << total_costs << " Euro\n\n";
}

void financingCosts(int price)
{
    int duration = 0;
    std::cout << "Enter the duration of financing in months: ";
    std::cin >> duration;
    int financing_costs = price * 0.05 / 12 * duration;
    std::cout << "Financing Costs: " << financing_costs << "\n";
}
