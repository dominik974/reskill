#include <iostream>
using namespace std;

class Product
{

private:
    std::string title;
    float price;
    float taxRate;

public: // This creates the product
    Product(const std::string &title, float price, float taxRate)
        : title(title), price(price), taxRate(taxRate) {}

    float getprice() const
    {
        return price;
    }
    float gettaxrate() const
    {
        return taxRate;
    }
};

float calculateTax(float price, float taxRate)
{
    return price * taxRate;
}

int main()
{
    Product tshirt = Product("Hugo Boss", 20.00, 0.19);
    std::cout << "Price:\t" << tshirt.getprice() << endl;
    std::cout << "Tax rate:\t" << tshirt.gettaxrate() << endl;
    float taxesForShirt = calculateTax(tshirt.getprice(), tshirt.gettaxrate());
    std::cout << "Tax:\t" << taxesForShirt << endl;
    return 0;
}
