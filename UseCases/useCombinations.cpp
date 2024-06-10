#include "useCombinations.h"
#include "../Combinations/combination1.h"
#include "../Combinations/combination2.h"

namespace Project::Use {

void use_combination1() {
    Detail::Comb1 comb1;
    LongInteger n = LongInteger ("21638369166612496703991271955994563624044383325105383029306009417224944272131");
    if (comb1.comb1_primality_test(n))
        std::cout << "the number "<< n << " is prime\n";
    else
        std::cout << "the number "<< n << " is composite\n";

    n = LongInteger("56713727820156410577229101238628035243");
    if (comb1.comb1_primality_test(n))
        std::cout << "the number "<< n << " is prime\n";
    else
        std::cout << "the number "<< n << " is composite\n";
}

void use_combination2() {
    Detail::Comb2 comb2;
    LongInteger n = LongInteger("106034929479008809862776424170460808190085984129117168803272987114325199071833");
    if (comb2.comb2_primality_test(n))
        std::cout << "the number "<< n << " is prime\n";
    else
        std::cout << "the number "<< n << " is composite\n";

    n = LongInteger("18987964267331664557");
    if (comb2.comb2_primality_test(n))
        std::cout << "the number "<< n << " is prime\n";
    else
        std::cout << "the number "<< n << " is composite\n";
}
}  // namespace Use
