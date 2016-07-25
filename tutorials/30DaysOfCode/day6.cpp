#include <iostream>  // std::cin
#include <string>
#include <limits>

void processLine(const std::string& line);

int main()
{
    // Declare variables
    std::size_t n_tests;

    // Read inputs
    std::cin >> n_tests;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Print according to conditions
    std::string line;
    for (std::size_t i = 0U; i < n_tests; ++i)
    {
        std::getline(std::cin, line);
        processLine(line);
    }

    return 0;
}

void processLine(const std::string &line)
{
    // Even
    for (std::size_t i = 0U; i < line.size(); i += 2U)
    {
        std::cout << line[i];
    }

    // Separator
    std::cout << " ";

    // Odd
    for (std::size_t i = 1U; i < line.size(); i += 2U)
    {
        std::cout << line[i];
    }
    std::cout << std::endl;
}
