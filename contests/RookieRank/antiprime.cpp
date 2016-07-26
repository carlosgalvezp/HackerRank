#include <iostream>  // std::cin
#include <vector>

std::size_t getAntiprime(const std::size_t number);

// http://ramanujan.sirinudi.org/Volumes/published/ram15.pdf
std::vector<std::size_t> antiprimes_  = {1, 2, 4, 6, 12, 24, 36, 48, 60, 120, 180, 240, 360, 720, 840, 1260, 1680, 2520, 5040, 7560, 10080, 15120, 20160, 25200, 27720, 45360, 50400, 55440, 83160, 110880, 166320, 221760, 277200, 332640, 498960, 554400, 665280, 720720, 1081080, 1441440, 2162160, 2882880, 3603600, 4324320, 6486480, 7207200, 8648640, 10810800};

int main()
{
    // Read number of queries
    std::size_t n_queries;
    std::cin >> n_queries;

    // Process
    for (std::size_t i = 0U; i < n_queries; ++i)
    {
        // Read number
        std::size_t number;
        std::cin >> number;

        // Get antiprime
        std::cout << getAntiprime(number) << std::endl;
    }

    return 0;
}

std::size_t getAntiprime(const std::size_t number)
{
    for (std::size_t i = 0U; i < antiprimes_.size(); ++i)
    {
        if (antiprimes_[i] >= number)
        {
            return antiprimes_[i];
        }
    }
    return 0U;
}
