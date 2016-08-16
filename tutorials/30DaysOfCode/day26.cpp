#include <iostream>

const std::size_t no_fine = 0U;
const std::size_t day_fine = 15U;
const std::size_t month_fine = 500U;
const std::size_t year_fine = 10000U;

int main()
{
    // Read actual and expected dates
    std::size_t d_act, m_act, y_act;
    std::cin >> d_act >> m_act >> y_act;

    std::size_t d_exp, m_exp, y_exp;
    std::cin >> d_exp >> m_exp >> y_exp;

    // Compute fine
    if (y_act > y_exp)
    {
        std::cout << year_fine;
    }
    else if (y_act < y_exp)
    {
        std::cout << no_fine;
    }
    else
    {
        if (m_act > m_exp)
        {
            std::cout << month_fine * (m_act - m_exp);
        }
        else if (m_act < m_exp)
        {
            std::cout << no_fine;
        }
        else
        {
            if (d_act > d_exp)
            {
                std::cout << day_fine * (d_act - d_exp);
            }
            else
            {
                std::cout << no_fine;
            }
        }
    }
    return 0;
}
