#include <iostream>
#include <iomanip>

const unsigned int precision = 6U;

// Compute the ratio of numbers in the array that are
// positive, negative or zeros
int main()
{
    // Declare inputs
    std::size_t n;

    // Read array size
    std::cin >> n;

    // Compute output
    std::size_t n_positive = 0U;
    std::size_t n_negative = 0U;
    int array_i;

    for (std::size_t i = 0U; i < n; ++i)
    {
        std::cin >> array_i;
        if (array_i > 0)
        {
            ++n_positive;
        }
        else if (array_i < 0)
        {
            ++n_negative;
        }
    }

    const double n_d = static_cast<double>(n);
    const double f_positive = static_cast<double>(n_positive) / n_d;
    const double f_negative = static_cast<double>(n_negative) / n_d;

    // Print
    std::cout << std::setprecision(precision) << std::fixed << f_positive << std::endl;
    std::cout << std::setprecision(precision) << std::fixed << f_negative << std::endl;
    std::cout << std::setprecision(precision) << std::fixed << 1. - f_positive - f_negative << std::endl;

    return 0;
}
