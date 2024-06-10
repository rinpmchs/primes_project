#include "../EratosthenesSieve/sieve.h"
#include "../Useful/profiler.h"
#include <fstream>
#include <gtest/gtest.h>

namespace Project::Tests {

namespace SieveTests {

std::ofstream sieve_test_results("../Tests/Data/sieve_test_results.csv", std::ios::out | std::ios::app);

class SieveTest : public ::testing::Test {
protected:
    void SetUp() override {
        if (!sieve_test_results.is_open()) {
            std::cerr << "Failed to open test results file" << std::endl;
        }
    }

    void TearDown() override {
        if (sieve_test_results.is_open()) {
            sieve_test_results.flush();
        }
    }
    Detail::Sieve sieve;
};
} // namespace SieveTests

using namespace SieveTests;
using namespace Useful;

std::vector<SmallInteger> read_primes(const std::string& filename) {
    std::vector<SmallInteger> primes;
    std::ifstream infile(filename);
    SmallInteger number;

    while (infile >> number) {
        primes.push_back(number);
    }

    return primes;
}

TEST_F(SieveTest,GeneratePrimes) {
    std::vector<SmallInteger> list = {30, 79, 1000000};
    std::vector<SmallInteger> expected_30 = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    std::vector<SmallInteger> expected_79 = read_primes("../Tests/Data/primes_79.txt");
    std::vector<SmallInteger> expected_1000000 = read_primes("../Tests/Data/primes_1000000.txt");

    for (SmallInteger n : list) {
        Profiler::start();
        std::vector<SmallInteger> primes = sieve.generate_primes(1000000);
        auto primes_30 = sieve.generate_primes(30);
        Profiler::finish();
        auto duration = Profiler::getExecutionTimeDouble();
        bool result = primes_30 == expected_30;
    }
    Profiler::start();
    std::vector<SmallInteger> primes = sieve.generate_primes(1000000);
    auto primes_30 = sieve.generate_primes(30);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    bool result = primes_30 == expected_30;
    EXPECT_EQ(primes_30, expected_30);
    sieve_test_results << "SieveTest,GeneratePrimes," << 30 << "," << result << "," << duration << "\n";

    assert(!expected_79.empty() && "expected_79 is empty");

    EXPECT_EQ(sieve.generate_primes(79), expected_79);
    assert(!expected_1000000.empty() && "expected_1000000 is empty");
    sieve_test_results << "SieveTest,GeneratePrimes," << 79 << "," << result << "," << duration << "\n";

    EXPECT_EQ(sieve.generate_primes(1000000), expected_1000000);
    sieve_test_results << "SieveTest,GeneratePrimes," << 1000000 << "," << result << "," << duration << "\n";
}

TEST_F(SieveTest,Duration) {
    Profiler::start();
    std::vector<SmallInteger> primes = sieve.generate_primes(1000000);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    EXPECT_LT(duration, 100.0);
    sieve_test_results << "SieveTest,Duration," << 1000000 << "," << 1 << "," << duration << "\n";
}

TEST_F(SieveTest,EdgeCaseTest) {
    Profiler::start();
    std::vector<SmallInteger> primes = sieve.generate_primes(1);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    EXPECT_EQ(primes.size(), 0);
    sieve_test_results << "SieveTest,EdgeCaseTest," << 1 << "," << 1 << "," << duration << "\n";
}
}  // namespace Project::Tests
