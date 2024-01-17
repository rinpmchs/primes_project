#include "pseudoprimes.h"
#include "../Useful/algorithms.h"

namespace PseudoPrimes {

bool is_pseudoprime() {
    TypeU32_t n = 341; // n is odd and composite
    // наверное, стоит сделать проверку на composite (например, из trial_div), а потом запихнуть их сюда
    if (n % 2 == 1 && UsefulAlgorithms::power_mod(2, n - 1, n) == 1)
        return true;
    return false;
}


bool strong_pseudoprime_test() {

}
}