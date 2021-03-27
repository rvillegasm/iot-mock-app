#include "Calculator.hpp"

#include <cmath>


float Calculator::pow(float num, int exp) 
{
    float temp;
    if (exp == 0)
    return 1;
    temp = pow(num, exp / 2);
    if ((exp % 2) == 0) {
        return temp * temp;
    } else {
        if (exp > 0)
            return num * temp * temp;
        else
            return (temp * temp) / num;
    }
}

float Calculator::square(float num) 
{
    return pow(num, 2);
}

float Calculator::cube(float num) 
{
    return pow(num, 3);
}
