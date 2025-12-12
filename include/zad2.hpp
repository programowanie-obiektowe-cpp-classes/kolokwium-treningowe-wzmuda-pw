#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

class Makaron
{
public:


    virtual ~Makaron()                     = default;

    virtual double ileMaki(unsigned P) const = 0;

    static Makaron* gotujMakaron(const std::string& s);

};

// tutaj klasa Penne

class Penne : public Makaron
{
public:
    double ileMaki(unsigned P) const override { return static_cast< double >(P); };
};
// tutaj definicja metody gotujMakaron

Makaron* Makaron::gotujMakaron(const std::string& s)
{

    if (s.empty())
    {
        return new Penne();
    }

    if (s.front() == s.back())
    {
        return new tagiatelle(3.14, 0.42, 0.1);
    }
    else
    {
        return new Penne();
    }
}
