#include "../integer.h"

namespace Project::Detail {

class Comb2
{
public:
    friend class Comb1;
    bool comb2_primality_test(const LongInteger &number);
};
}  // namespace Project::Detail
