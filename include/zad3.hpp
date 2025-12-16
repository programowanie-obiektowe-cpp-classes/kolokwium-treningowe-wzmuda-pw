#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem

template<typename SosTyp>
std::size_t polejSosem(const Tagliatelle& makaron, const SosTyp& sos)
{
    return sos.polej(makaron);
}

// szablonowa funkcja polejSosem przyjmująca obiekt Tagliatelle oraz obiekt sosu
// i zwracająca wynik wywołania metody polej sosu na makaronie typu std::size_t
// jako pierwszy argument przyjmuje stałą  (CONST) referencje do obiektu Tagliatelle
// jako drugi argument przyjmuje referencje do obiektu sosu dowolnego typu SosTyp
// którym jest sparametryzowany typ szablonu
