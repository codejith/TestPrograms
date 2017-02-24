#include <iostream>
#include<cmath>

int calculations(int num, int numBag[], int size);

void factorial(int number)
{
    const int MAX = 600;
    int size = 1;
    int numBag[MAX];
    numBag[0] = 1;
    for (int i = 2; i <= number; ++i)
    {
        size = calculations(i, numBag, size);
    }

    for (int j = size-1; j >=0; --j)
    {
        std::cout << numBag[j];
    }
    std::cout << std::endl;
}

int calculations(int num, int numBag[], int size)
{
    int carry = 0;
    for (int i = 0; i < size; ++i)
    {
        int product = numBag[i] * num + carry;
        numBag[i] = product % 10;
        carry = product / 10;
    }

    while (carry)
    {
        numBag[size] = carry % 10;
        carry = carry / 10;
        ++size;
    }

    return size;
}


int main()
{
    int limit, num;
    std::cin >> limit;
    for(int i = 0; i < limit; ++i)
    {
        std::cin >> num;
        factorial(num);
    }
    return 0;
}
