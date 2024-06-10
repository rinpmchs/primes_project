#include "../integer.h"
#include <boost/random.hpp>

namespace Project::Utils {

SmallInteger power_mod(SmallInteger base, SmallInteger exp, SmallInteger m);
SmallUInteger power_mod(SmallUInteger base, SmallUInteger exp, SmallUInteger m);
LongInteger power_mod(const LongInteger& base, const LongInteger& exp, const LongInteger& m);
LongInteger gcd(const LongInteger& num1, const LongInteger& num2);
bool is_composite(SmallInteger n);
bool is_composite(SmallUInteger n);
bool is_composite(const LongInteger& n);

class RandomGenerator {
public:
    RandomGenerator(const LongInteger& from, const LongInteger& to)
            : mt_(42), ui_(boost::random::uniform_int_distribution<LongInteger>(from, to)) {
    }
    LongInteger generate_number();

private:
    boost::random::mt19937 mt_;
    boost::random::uniform_int_distribution<LongInteger> ui_;
};
}  // namespace Project::Utils
