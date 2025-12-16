#include <string>
#include "catch.hpp"
#include <string>
class Makaron
{
public:
    virtual ~Makaron() = default; // wirtualny destruktor domyslny obiektów dziedziczacych przez
                                  // wskaznik do klasy bazowej

    virtual double  ileMaki(unsigned) const = 0; //czysto wirtualna metoda ila maki

    static Makaron* gotujMakaron(const std::string& s); // statyczna metoda gotujMakaron zwracajaca wskaznik do
                                        // makaronu definiowana poza klasa
};

class Tagliatelle : public Makaron // tgiatelle dziedziczy po makaronie i nadpisuje ileMaki
{
    double              L, W, R; //to jest prywatne
    static const double C; //to też jest prywatne ale też statyczne

public:
    Tagliatelle() : L{.5}, W{.5}, R{.5} {} //publiczny konstruktor domyslny nadający poczatkową wartość

    Tagliatelle(double a, double b, double c) : L{a}, W{b}, R{c} {} // publiczny konstruktor z trzema parametrami

    double ileMaki(unsigned P) const { return static_cast< double >(P) * L * W * (1. - R) * C; } //publiczna metoda ileMaki zwracajaca ilosc maki
};
