#include <iostream>
using namespace std;

class notifier
{
public:
    virtual void generateWeatherAlert(const string &weatherConditions) = 0;
};

class Phone : public notifier
{
public:
    void generateWeatherAlert(const string &weatherConditions) override
    {
        if (weatherConditions == "rainy")
        {
            std::cout << "It is rainy" << endl;
        }
    }
};

class Emailer : public notifier
{
public:
    void generateWeatherAlert(const string &weatherConditions) override
    {
        if (weatherConditions == "sunny")
        {
            std::cout << "It is sunny" << endl;
        }
    }
};

class WeatherTracker
{
public:
    string currentConditions;

    void setCurrentConditions(const string &weatherDescription)
    {
        currentConditions = weatherDescription;
    }

    const string &notify(notifier &notifier)
    {
        notifier.generateWeatherAlert(currentConditions);
        return currentConditions;
    }
};

int main()
{
    WeatherTracker tracker;
    tracker.setCurrentConditions("rainy");

    Phone m;
    tracker.notify(m);

    return 0;
}
