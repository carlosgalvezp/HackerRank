#include <iostream>

int main()
{
    int value;

    // Setup cin to throw exceptions
    // http://stackoverflow.com/questions/12754486/test-cin-exception
    std::cin.exceptions(std::istream::failbit | std::istream::badbit);

    // Try to read input. If it's not an integer, it will throw exception
    try
    {
        std::cin >> value;
        std::cout << value;
    }
    catch (std::istream::failure e)
    {
        std::cout << "Bad String";
    }

    return 0;
}
