#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle


class tagiatelle : public Makaron
{
private:
    double L; // długość kawałka makaronu
    double W; // szerokość kawałka makaronu
    double R; // proporcja jajek do mąki

    static double C;

public:
    tagiatelle(double l, double w, double r) : L(l), W(w), R(r) {};
    nitka() : L(0.5), W(0.5), R(0.5) {};

    double ileMaki(unsigned P) const override { return P * L * W * (1. - R) * C;
    }

}
