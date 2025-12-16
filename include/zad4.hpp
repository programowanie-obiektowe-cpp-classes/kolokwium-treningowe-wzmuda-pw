#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
// przyjmuje jako argument stałą referencję do wektora obiektów Tagliatelle
double obliczMake(const std::vector< Tagliatelle >& Makaron)
{
    double M = 0.0;
    std::size_t i = 1u; //poczatkowa ilosc maki (wartość ileMaki)
    for (auto it = Makaron.crbegin(); it != Makaron.crend(); ++it) // iteracja od konca do początku
    {
        M += it->ileMaki(i++); //zwiekszanie ilosci i przy kazdej itearcji
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