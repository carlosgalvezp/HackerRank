#include <iostream>  // std::cin
#include <cmath>  // std::pow

std::size_t computePowerAndModulo(const std::size_t k, const std::size_t t);

const std::size_t modulo = 1E9 + 7;

int main()
{
    // Declare variables
    std::size_t a;
    std::size_t b;
    std::size_t t;

    // Read inputs
    std::cin >> a;
    std::cin >> b;
    std::cin >> t;

    // Compute number of virus
    std::size_t k = (a + b) / 2U;

    // Output
    const std::size_t output = computePowerAndModulo(k, t);

    // Print
    std::cout << output;
    return 0;
}

std::size_t computePowerAndModulo(const std::size_t k, const std::size_t t)
{
    // If the power fits in 64-bit int, compute it
    if(t * std::log2(k) < 20U)  // t * log2(k) = 6.6 · 10E18 < 1.84 · 10E19 (64bit)
    {
        return std::pow(k, t);
    }
    else  // Otherwise divide and conquer
    {
        std::size_t tmp = computePowerAndModulo(k, t/2);

        if (t % 2 == 0)
            return ((tmp % modulo) * (tmp % modulo)) % modulo;
        else
            return (((k * tmp) % modulo) * (tmp % modulo)) % modulo;
    }
}
