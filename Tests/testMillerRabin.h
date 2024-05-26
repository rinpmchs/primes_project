#include "../project.h"
#include "../MillerRabin/MillerRabin.h"
#include <gtest/gtest.h>
#include "gtestss.h"

//namespace Tests {
//TEST (MR, TimeComplexityTest)
//{
//    Project::MillerRabin mr;
////    mr.is_prime(Project::LongInteger(answers[0][0]));
//}
//
//TEST (MR, PrimalityTest)
//{
//
//}
//}

namespace Project::Detail {

class Testt {
public:
    static void test_miller_rabin_primality();
};
}