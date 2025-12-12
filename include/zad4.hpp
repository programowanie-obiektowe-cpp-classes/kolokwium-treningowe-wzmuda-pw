#include "zad1.hpp"

#include <vector>

double obliczakMake(const std::vector< tagiatelle >& Makaron)
{
    double M = 0.0;
    unsigned mnoznik = 1;
    for (auto it = Makarony.rbegin(); it != Makarony.rend(); ++it)
    {
        M += Makaron->ileMaki(mnoznik);
        ++mnoznik;
    }   

    if (M>100.0)
    {
        throw 404;
    }
    else if (M> 50.0)
    {
        throw 3.14;
    }
    return M;

   }
