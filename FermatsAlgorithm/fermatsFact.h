#include "../project.h"

using namespace Project;

namespace Detail {

class FermatFact {
public:
    std::pair<SmallUInteger, SmallUInteger> factorize(const SmallUInteger& n);
};

}
