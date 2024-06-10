#include "../integer.h"

namespace Project::Detail {
class FermatFact {
public:
    std::pair<SmallUInteger, SmallUInteger> factorize(const SmallUInteger& n);
};
}  // namespace Project::Detail
