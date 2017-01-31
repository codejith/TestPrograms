#include <iostream>

template <typename T>
T &sum(T *array, T limit)
{
    T sum = 0;
    for(int i = 0; i < limit; ++i)
    {
        sum+=array[i];
    }
    sum/=limit;
    return sum;
}

