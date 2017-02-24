#include <iostream>
#include <iomanip>
int main()
{
    int withDraw;
    double amount;
    std::cin >> withDraw;
    std::cin>> amount;
    std::cout << std::fixed  << std::setprecision(2);
    std::cout <<  (withDraw%5==0? (withDraw<amount && (amount-withDraw)>=.50? ((amount-withDraw)- .50): amount): amount) << std::endl;
    return 0; 
}
