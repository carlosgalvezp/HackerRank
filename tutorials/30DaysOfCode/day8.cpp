#include <iostream>  // std::cin
#include <unordered_map>
#include <utility>  // std::make_pair

int main()
{
    // Read inputs
    std::size_t n_entries;
    std::cin >> n_entries;

    // Create phone book
    std::unordered_map<std::string, std::size_t> phonebook;

    for (std::size_t i = 0U; i < n_entries; ++i)
    {
        std::string name;
        std::size_t number;

        std::cin >> name;
        std::cin >> number;

        phonebook.insert(std::make_pair(name, number));
    }

    // Perform queries
    std::string name;

    while (std::cin >> name)
    {
        auto it = phonebook.find(name);

        if (it != phonebook.end())
        {
            std::cout << it->first << "=" << it->second << std::endl;
        }
        else
        {
            std::cout << "Not found" << std::endl;
        }
    }

    return 0;
}
