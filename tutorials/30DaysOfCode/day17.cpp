#include <iostream>
#include <cmath>
#include <string>
#include <stdexcept>

class Calculator
{
public:
    int power(int n, int p)
    {
        if (n < 0 || p < 0)
        {
            throw std::invalid_argument("n and p should be non-negative");
        }
        else
        {
            return std::pow(n, p);
        }
    }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    std::cin>>T;
    while(T-->0)
    {
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans = myCalculator.power(n,p);
               std::cout << ans << std::endl;
         }
         catch(std::exception& e)
         {
             std::cout << e.what() << std::endl;
         }
      }
    }

}
