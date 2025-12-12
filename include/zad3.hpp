#include "zad1.hpp"
#include <cstdint>
#include <functional>

template<typename SosTyp>
std::size_t polejSosem(const tagiatelle& makaron, const SosTyp& sos)
{
    return sos.polej(makaron);
}
