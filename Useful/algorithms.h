#include "../project.h"
#include <boost/random.hpp>

namespace Project::Useful {

SmallInteger power_mod(SmallInteger base, SmallInteger exp, SmallInteger m);
SmallUInteger power_mod(SmallUInteger base, SmallUInteger exp, SmallUInteger m);
LongInteger power_mod(const LongInteger& base, const LongInteger& exp, const LongInteger& m);
LongInteger gcd(const LongInteger& num1, const LongInteger& num2);
bool is_composite(SmallInteger n);
bool is_composite(SmallUInteger n);
bool is_composite(const LongInteger& n);

class RandomGenerator {
public:
    RandomGenerator(const LongInteger& from_margin, const LongInteger& to_margin) {
        // set range for uniform int distribution - ui
        this->ui = boost::random::uniform_int_distribution<LongInteger>(from_margin, to_margin);
    }

    LongInteger generate_number() {
        return this->ui(this->mt);
    }

private:
    boost::random::mt19937 mt;
    boost::random::uniform_int_distribution<LongInteger> ui;
};

}  // namespace Project::Useful
