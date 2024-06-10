#include "../integer.h"
#include <map>

namespace Project::Detail {

class TrialDivision {
public:
    int divide(LongInteger& f, LongInteger d);
    std::map<LongInteger, int> factorize(const LongInteger& n, const LongInteger& max);
    bool is_composite(SmallUInteger n);
};
}  // namespace Project::Detail
