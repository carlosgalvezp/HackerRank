#include <iostream>  // std::cin
#include <cmath>  // std::round

int main()
{
    // Declare variables
    unsigned int n;

    // Read inputs
    std::cin >> n;

    // Print according to conditions
    if (n % 2U != 0)    // it's odd
    {
        std::cout << "Weird";
    }
    else                 // it's even
    {
        if (n >=2U && n <= 5U)
        {
            std::cout << "Not Weird";
        }
        else if (n >= 6U && n <= 20U)
        {
            std::cout << "Weird";
        }
        else if (n > 20U)
        {
            std::cout << "Not Weird";
        }
    }
    return 0;
}
