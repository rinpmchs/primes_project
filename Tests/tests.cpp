#include "tests.h"
#include "testSieve.h"
#include "testTrialDivision.h"
#include "testAlgorithms.h"
#include "testFermatsAlgorithm.h"
#include "testPollard.h"
#include "testMillerRabin.h"
#include "../Exceptions/except.h"
#include "../AKSAlgorithm/AKSAlg.h"

using namespace Project;

namespace Tests {

void run_all_tests() {
//    TrialDivision::test_compositeness();

//    TrialDivision::test_factorization();
//    TrialDivision::test_time();
//    Sieve::test_print_primes();
//    Sieve::test_primality();
//    Useful::test_power_mod();
//    FermatFact::test_factorization();
    try {
//        Project::Detail::Testt::test_miller_rabin_primality();

//        FermatFact::test_factorzation();
//        TrialDivision::test_factorization();
        Pollard::test_pollard_factorization();
//        AKS aks;
//        aks.test_AKS();

    } catch (...) {
        Except::handleException("Pollard::test_pollard_factorization()");
    }
}

}