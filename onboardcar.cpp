#include <iostream>

float calculateKMPL(float distance, float fuel);
void checkOilChange(int currentMileage, int lastOilChangeMileage, int oilChangeInterval);
float calculateTimeToReachSpeed(float initialSpeed, float targetSpeed, float acceleration);
float calculateTravelTime(float TravelDistance, float averageSpeed);

int main()
{
    float distance = 0, fuel = 0, currentMileage = 0, lastOilChangeMileage = 0, oilChangeInterval = 0, initialSpeed = 0, targetSpeed = 0, acceleration = 0, TravelDistance = 0, averageSpeed = 0;

    std::cout << "Enter traveled distance in km: ";
    std::cin >> distance;
    std::cout << "Enter consumed fuel in l: ";
    std::cin >> fuel;
    std::cout << "Enter current mileage in km: ";
    std::cin >> currentMileage;
    std::cout << "Enter last oil change mileage in km: ";
    std::cin >> lastOilChangeMileage;
    std::cout << "Enter oil change interval in km: ";
    std::cin >> oilChangeInterval;
    std::cout << "Enter initial speed km/h: ";
    std::cin >> initialSpeed;
    std::cout << "Enter target speed km/h: ";
    std::cin >> targetSpeed;
    std::cout << "Enter acceleration in m/s2: ";
    std::cin >> acceleration;
    std::cout << "Enter distance to travel in km: ";
    std::cin >> TravelDistance;
    std::cout << "Enter average speed in km/h: ";
    std::cin >> averageSpeed;

    std::cout << calculateKMPL(distance, fuel) << " km/l\n";
    checkOilChange(currentMileage, lastOilChangeMileage, oilChangeInterval);
    std::cout << calculateTimeToReachSpeed(initialSpeed, targetSpeed, acceleration) << " s\n";
    std::cout << "Travel time: " << calculateTravelTime(TravelDistance, averageSpeed) << " h";
    return 0;
}

float calculateKMPL(float distance, float fuel)
{
    float fuelEfficiency = distance / fuel;
    return fuelEfficiency;
}

void checkOilChange(int currentMileage, int lastOilChangeMileage, int oilChangeInterval)
{
    if (currentMileage > (lastOilChangeMileage + oilChangeInterval))
    {
        std::cout << "Maintenance!\n";
    }
    else
    {
        std::cout << "No maintenance!\n";
    }
}

float calculateTimeToReachSpeed(float initialSpeed, float targetSpeed, float acceleration)
{
    return (targetSpeed - initialSpeed) / 3.6 / acceleration;
}

float calculateTravelTime(float TravelDistance, float averageSpeed)
{
    return (TravelDistance / averageSpeed);
}
