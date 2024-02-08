#include <iostream>

int *findMax(int array[], int size);

int main()
{
    int numbers[] = {10, 24, 6, 45, 32, 50, 8, 19}; // Initialize with your own values
    int *ptr;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Call the findMax function to get a pointer to the maximum value
    ptr = findMax(&numbers[0], size);

    // Display the maximum value and its index in the array
    std::cout << "\nMAIN";
    std::cout << "\nptr:\t" << ptr;
    std::cout << "\n*ptr:\t" << *ptr << "\n";
    std::cout << "Index:\t" << ptr - numbers;

    return 0;
}

// Function to find the maximum value in an array and return a pointer to it
int *findMax(int *array, int size)
{
    // Implement the logic to find and return a pointer to the maximum value
    int max = array[0];
    int *ptr = &array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            ptr = &array[i];
        }
        std::cout << "i:\t" << i << "\tArray[i]:\t" << array[i] << "\tmax:\t" << max << "\tptr:\t" << ptr << "\n";
    }
    std::cout << "\nptr:\t" << ptr;
    std::cout << "\n*ptr:\t" << *ptr << "\n";
    return ptr;
}
