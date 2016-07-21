#include <iostream>
#include <string>
#include <iomanip>

// Convert from AM/PM to 24h time
int main()
{
    // Declare inputs
    std::string time_in;

    // Read input time
    std::getline(std::cin, time_in);

    // Get tokens
    const std::string hh = time_in.substr(0U, 2U);
    const std::string mm = time_in.substr(3U, 2U);
    const std::string ss = time_in.substr(6U, 2U);
    const std::string am = time_in.substr(8U, 2U);

    int hh_new = std::stoi(hh);

    // Special case for 12 hours
    if (hh_new == 12)
    {
        if (am.compare("AM") == 0)
            hh_new = 0;
        else
            hh_new = 12;
    }
    else
    {
        // Add 12 hours if PM
        if (am.compare("PM") == 0)
        {
            hh_new += 12;
        }
    }

    // Print
    std::cout << std::setw(2) << std::setfill('0') << hh_new << ":" << mm << ":" << ss;

    return 0;
}
