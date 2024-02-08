#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<std::string> filenames;
    int option;
    std::string filename;

    while (true)
    {
        std::cout << "Choose option: 1:Create new file, 2: Delete file, 3: List all files, 4: Exit\n";
        std::cin >> option;
        if (option == 1)
        {
            std::cout << "Enter a file name:\n";
            std::cin >> filename;
            filenames.push_back(filename);
        }
        else if (option == 2)
        {
            std::cout << "Enter a file name:\n";
            std::cin >> filename;
            auto iter = std::find(filenames.begin(), filenames.end(), filename);
            if (iter != filenames.end())
            {
                filenames.erase(iter);
            }
            else
            {
                std::cout << "\nError.Not found";
            }
        }
        else if (option == 3)
        {
            for (int i = 0; i < filenames.size(); i++)
            {
                std::cout << i << " " << filenames[i] << "\n";
                // std::cout << filenames.at(i);
            }
        }
        else
        {
            return 0;
        }
    }

    return 0;
}
