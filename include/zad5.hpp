#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

template<typename Iterator>
void sortujTagliatelle(Iterator begin, Iterator end)
{
    std::sort(begin, end, [](const tagiatelle& a, const tagiatelle& b)
        {
        return a.ileMaki(1) < b.ileMaki(1);
    });
}
