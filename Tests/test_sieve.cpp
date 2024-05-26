#include "../EratosthenesSieve/sieve.h"
#include "../Useful/profiler.h"
#include <fstream>
#include <gtest/gtest.h>

using namespace Detail;
using namespace Useful;

namespace Tests {

std::vector<SmallInteger> read_primes(const std::string& filename) {
    std::vector<SmallInteger> primes;
    std::ifstream infile(filename);
    SmallInteger number;

    while (infile >> number) {
        primes.push_back(number);
    }

    return primes;
}

TEST(Sieve, GeneratePrimes) {
    std::vector<SmallInteger> expected_30 = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    std::vector<SmallInteger> expected_79 = read_primes("../Tests/Data/primes_79.txt");
    std::vector<SmallInteger> expected_1000000 = read_primes("../Tests/Data/primes_1000000.txt");

    Detail::Sieve sieve;
    EXPECT_EQ(sieve.generate_primes(30), expected_30);
    assert(!expected_79.empty() && "expected_79 is empty");
    EXPECT_EQ(sieve.generate_primes(79), expected_79);
    assert(!expected_1000000.empty() && "expected_1000000 is empty");
    EXPECT_EQ(sieve.generate_primes(1000000), expected_1000000);
}

TEST(Sieve, TimeComplexityTest) {
    Detail::Sieve sieve;
    Profiler::start();
    std::vector<SmallInteger> primes = sieve.generate_primes(1000000);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    std::cout << "execution time: " << duration << " ms\n";
    EXPECT_LT(duration, 100.0);
}

TEST(Sieve, EdgeCaseTest) {
    Detail::Sieve sieve;
    std::vector<SmallInteger> primes = sieve.generate_primes(1);
    EXPECT_EQ(primes.size(), 0);
}
}
