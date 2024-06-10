#include "usages.h"
#include "useSieve.h"
#include "useTrialDivision.h"
#include "useAlgorithms.h"
#include "useFermat.h"
#include "usePollard.h"
#include "useMillerRabin.h"
#include "useCombinations.h"
#include "../Exceptions/except.h"

namespace Project::Use {
void run_all_usages() {

    try {
        use_combination1();
//        use_combination2();
//        use_miller_rabin_primality();
//        use_fermat_factorization();
//        use_trial_compositeness();
//        use_trial_factorization();
//        use_sieve_print_primes();
//        use_sieve_primality();
//        use_power_mod();
//        use_pollard_factorization();
    } catch (...) {
        Except::handleException("use_combination1()");
//        Except::handleException("use_pollard_factorization()");
    }
}
}  // namespace Project::Use
