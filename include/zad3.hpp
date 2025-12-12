#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem

template<typename SosTyp>
std::size_t polejSosem(const Tagliatelle& makaron, const SosTyp& sos)
{
    return sos.polej(makaron);
}
