#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle

template<typename Iterator>
void sortujTagliatelle(Iterator begin, Iterator end)
{
    std::sort(begin, end, [](const Tagliatelle& a, const Tagliatelle& b)
        {
        return a.ileMaki(1) < b.ileMaki(1); // trzeci wskaźnik do porównania ilości maki dla porcji równej 1
    });
}
// szablonowa funkcja sortujTagliatelle przyjmująca
// dwa argumenty typu Iterator (którym jestsparametryzowany typ szablonu)

// sortuje elementy w zakresie [begin, end) 
// zakres jest od a do b (nie włącznie z b)
// sprawdza ilość maki dla każdej Tagliatelle z ilością porcji równą 1
// i sortuje je w kolejności rosnącej na podstawie tej wartości