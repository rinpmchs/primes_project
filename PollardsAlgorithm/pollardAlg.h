#include "../integer.h"

namespace Project::Detail {
class Pollard {
public:
    LongInteger pollard_p_minus_1_fact(const LongInteger& n, const LongInteger& c, const LongInteger& max);
};
}  // namespace Project::Detail
