#include <iostream>
using namespace std;

// This program handles the management of apartments

class Apartment
{
public:
    string apartmentName;
    int squareFootage;
    int numberOfBedrooms;

    void setSquareFootage(int sqft);
    int getSquareFootage();
    int getnumberOfBedrooms();
};

class PenthouseSuite : Apartment
{ // If the apartment is a penthouse suite we can ad bedrooms to it
public:
    PenthouseSuite()
    {
        numberOfBedrooms = 4;
    }
    void Name()
    {
        apartmentName = "Penthouse";
    }

    void setSquareFootage(int sqft)
    {
        squareFootage = sqft;
    }
    int getSquareFootage()
    {
        return squareFootage;
    }
    int getnumberOfBedrooms()
    {
        return numberOfBedrooms;
    }

    void upgrade()
    {
        squareFootage += 40;
        numberOfBedrooms += 1;
    }
};

class Studio : Apartment
{ // If the apartment is a studio we don't need bedrooms
public:
    Studio()
    {
        numberOfBedrooms = 0;
    }
    void Name()
    {
        apartmentName = "Studio";
    }

    void setSquareFootage(int sqft)
    {
        squareFootage = sqft;
    }
    int getSquareFootage()
    {
        return squareFootage;
    }
    int getnumberOfBedrooms()
    {
        return numberOfBedrooms;
    }
    void upgrade()
    {
        squareFootage += 40;
    }
};

int main()
{
    PenthouseSuite penth;
    penth.setSquareFootage(80);
    std::cout << "Flaeche: " << penth.getSquareFootage() << "\tBedromms: " << penth.getnumberOfBedrooms() << endl;
    penth.upgrade();
    std::cout << "Flaeche: " << penth.getSquareFootage() << "\tBedromms: " << penth.getnumberOfBedrooms() << endl;

    PenthouseSuite apart;
    apart.setSquareFootage(80);
    std::cout << "Flaeche: " << apart.getSquareFootage() << "\tBedromms: " << apart.getnumberOfBedrooms() << endl;
    apart.upgrade();
    std::cout << "Flaeche: " << apart.getSquareFootage() << "\tBedromms: " << apart.getnumberOfBedrooms() << endl;
    return 0;
}
