#include <iostream>
#include <vector>

class Car
{
private:
    std::string brand_;
    std::string model_;
    int year_;
    bool rented_;

public:
    Car(std::string brand = "brand", std::string model = "model", int year = 2023, bool rented = false)
    {
        brand_ = brand;
        model_ = model;
        year_ = year;
        rented_ = rented;
    }

    void rentCar()
    {
        if (!rented_)
        {
            rented_ = true;
        }
    }

    void returnCar()
    {
        if (rented_)
        {
            rented_ = false;
        }
    }

    bool isRented()
    {
        return rented_;
    }

    const std::string &getBrand()
    {
        return brand_;
    }

    std::string getModel()
    {
        return model_;
    }

    int getYear()
    {
        return year_;
    }
};

int main()
{
    std::vector<Car> cars;
    cars.push_back(Car("BMW", "318i", 2022));
    cars.push_back(Car("BMW", "520d", 2021));
    cars.push_back(Car("BMW", "X3", 2023));
    cars.push_back(Car("BMW", "330e", 2022));
    cars.push_back(Car("BMW", "M4", 2021));

    cars[0].rentCar();
    cars[2].rentCar();
    cars[2].returnCar();
    cars[4].rentCar();

    std::cout << "| Brand      | Model       | Year | Status      |\n";
    std::cout << "|------------|--------------|------|-------------|\n";
    for (const Car &car : cars)
    {
        std::cout << "| " << car.getBrand() << "   | " << car.getModel() << "     | " << car.getYear() << " | " << (car.isRented() ? "Rented" : "Not Rented") << " |\n";
    }
    return 0;
}
