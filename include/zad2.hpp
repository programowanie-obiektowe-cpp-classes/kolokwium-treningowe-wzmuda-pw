#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>


// tutaj klasa Penne

class Penne : public Makaron // penne dziedziczy po makaronie i nadpisuje ileMaki
{
public:
    double ileMaki(unsigned P) const { return P; } // nadpisana metoda ileMaki zwracajaca ilosc maki
};
// tutaj definicja metody gotujMakaron

Makaron* Makaron::gotujMakaron(const std::string& s) // definicja statycznej metody gotujMakaron
{

    if (s.empty())
    {
        return new Penne();
    }

    if (s.front() == s.back())
    {
        return new Tagliatelle(3.14, 0.42, 0.1);
    }
    else
    {
        return new Penne();
    }
}


// jezeli pierwszta i ostatnia litera sa takie same to tworzy Tagliatelle z parametrami 3.14, 0.42,
// 0.1
// w przeciwnym wypadku tworzy Penne