#include <iostream>

template<typename T>
T sum(T *array, T limit)
{
    T sum = 0;
    for(int i=0; i < limit; ++i)
    {
        sum+=array[i];
    }
    sum/=limit;
    return sum;
}

int main()
{
    int myArray[] = {1, 2, 3, 4, 5};
    std::cout  << sum(myArray, 5) << std::endl;

    return 0;
}
