#include "../integer.h"

namespace Project::Detail {

class Comb1
{
public:
    friend class MillerRabin;
    friend class Comb2;
    bool comb1_primality_test(const LongInteger &number);
private:
    bool adapt_trial_division(const LongInteger& number, std::vector<SmallInteger>& primes);
    bool adapt_miller_rabin(const LongInteger& n, SmallInteger rounds_count);
};
}  // namespace Project::Detail
