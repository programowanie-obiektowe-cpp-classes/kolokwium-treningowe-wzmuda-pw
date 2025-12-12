#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake

double obliczMake(const std::vector< Tagliatelle >& Makaron)
{
    double M = 0.0;
    std::size_t i = 1u;
    for (auto it = Makaron.crbegin(); it != Makaron.crend(); ++it)
    {
        M += it->ileMaki(i++);
    }   
    if (M>100.0)
    {
        throw 404;
    }
    if (M> 50.0)
    {
        throw 3.14;
    }
    return M;

   }
