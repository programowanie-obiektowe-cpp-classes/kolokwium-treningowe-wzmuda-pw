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
        return a.ileMaki(1) < b.ileMaki(1);
    });
}

