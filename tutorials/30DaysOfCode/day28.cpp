#include <iostream>
#include <vector>
#include <algorithm>
#include <regex>

int main()
{
    std::size_t n_names;
    std::cin >> n_names;

    // Keep names whose email adress is a Gmail one
    std::vector<std::string> gmail_names;
    const std::regex regex(".+@gmail.com");

    for (std::size_t i = 0U; i < n_names; ++i)
    {
        std::string name, address;
        std::cin >> name >> address;

        // If it matches the regex...
        if (std::regex_match(address, regex))
        {
            gmail_names.push_back(name);
        }
    }

    // Sort alphabetically
    std::sort(gmail_names.begin(), gmail_names.end());

    // Print
    for (std::size_t i = 0U; i < gmail_names.size(); ++i)
    {
        std::cout << gmail_names[i] << std::endl;
    }
    return 0;
}
