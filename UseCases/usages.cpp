#include "usages.h"
#include "useSieve.h"
#include "useTrialDivision.h"
#include "useAlgorithms.h"
#include "useFermat.h"
#include "usePollard.h"
#include "useMillerRabin.h"
#include "../Exceptions/except.h"
#include "../AKSAlgorithm/AKSAlg.h"

using namespace Project;
using namespace Detail;

namespace Use {

void run_all_usages() {
//    TrialDivision::use_trial_compositeness();

//    TrialDivision::use_fermatsFact();
//    TrialDivision::test_time();
//    Sieve::test_print_primes();
    Sieve::test_primality();
    use_power_mod();
    use_fermatsFact();
    try {
//        Project::Detail::Testt::test_miller_rabin_primality();

//        FermatFact::test_factorzation();
//        TrialDivision::use_fermatsFact();
        Pollard::use_pollard_factorization();
//        AKS aks;
//        aks.test_AKS();

    } catch (...) {
        Except::handleException("Pollard::use_pollard_factorization()");
    }
}

}