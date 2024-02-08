#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

int main()
{
    std::string pw = "";

    int counter = 0;

    do
    {
        counter++;
        std::cout << "Password?\n";
        std::cin >> pw;
        // std::cout << "Length: " << pw.length() << "\n";
        if (pw.length() >= 5 && pw.length() <= 10)
        {
            if (std::find_if(pw.begin(), pw.end(), ::isdigit) != pw.end())
            {
                std::cout << "Valid!\n\n";
                break;
            }
        }

    } while (counter < 3);

    return 0;
}
