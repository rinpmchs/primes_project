#include "../integer.h"

namespace Project::Detail {
class MillerRabin {
public:
    friend class Comb1;
    bool is_prime(LongInteger& number);

private:
    bool miller_rabin_test(const LongInteger& base, LongInteger odd_m, SmallUInteger exp_t, const LongInteger& number);
};
}  // namespace Project::Detail
