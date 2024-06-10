#include "../integer.h"

namespace Project::Detail {

class Comb2
{
public:
    friend class Comb1;
    bool check_primality(const LongInteger &number);
};
}  // namespace Project::Detail
