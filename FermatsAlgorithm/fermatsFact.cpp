#include "fermatsFact.h"

namespace Detail {
std::pair<SmallUInteger, SmallUInteger> FermatFact::factorize(const SmallUInteger & n) {
    SmallUInteger sqrt_n = ceil(sqrt(n));
    SmallUInteger u, v;
    u = 2 * sqrt_n + 1;
    v = 1;
    SmallInteger r = sqrt_n * sqrt_n - n;

    while (r != 0) {
        if (r > 0) {
            r -= v;
            v += 2;
        } else {
            r += u;
            u += 2;
        }
    }

//    assert ((u - v) / 2 != 1 && "divisor is not integral");
    return {(u + v - 2) / 2, (u - v) / 2};
}
}