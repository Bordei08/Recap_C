#include "Math.h"

int Math::Add(int a, int b)
{
    return a + b;
}

int Math::Add(int a, int b, int c)
{
    return a+ b+ c;
}

int Math::Add(double a, double b)
{
    return int(a + b);
}

int Math::Add(double a, double b, double c)
{
    return int(a + + c);
}

int Math::Mul(int a, int b)
{
    return a * b;
}

int Math::Mul(int a, int b, int c)
{
    return a * b * c;
}

int Math::Mul(double a, double b)
{
    return int(a * b);
}

int Math::Mul(double a, double b, double c)
{
    return int(a * b * c);
}

int Math::Add(int count, ...)
{
    int sum = 0;
    va_list args;
    va_start(args, count);
  
    for (int i = 0; i < count; i++) {
        int currentArg = va_arg(args, int);
        sum += currentArg;
    }

    va_end(args);
    return sum;
}

char* Math::Add(const char* ref1, const char* ref2)
{
    if(!ref1 or !ref2)
        return nullptr;

    char* result = new char[(strlen(ref1) + strlen(ref2)) + 1];
    
    if (strcpy_s(result, (strlen(ref1) + strlen(ref2)) + 1, ref1) == 0) {
        if (strcat_s(result, (strlen(ref1) + strlen(ref2)) + 1, ref2) == 0) {
            return result;
        }
        else {
            delete[] result;
            return nullptr;
        }
    }
    else {
        delete[] result;
        return nullptr;
    }

    return result;
}


