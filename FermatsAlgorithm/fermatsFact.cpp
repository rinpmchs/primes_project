#include "fermatsFact.h"

namespace FermatFact {

std::pair<Project::SmallUInteger, Project::SmallUInteger> factorize(const Project::SmallUInteger & n) {
    Project::SmallUInteger sqrt_n = ceil(sqrt(n));
    //    Project::LongInteger sqrt_n = static_cast<Project::LongInteger>(sqrt(n));
    Project::SmallUInteger u, v;
    u = 2 * sqrt_n + 1;
    v = 1;
    Project::SmallInteger r = sqrt_n * sqrt_n - n;

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

//214i23439845
//214i23439846
//214i23439847
//214845

//12882492 = 3924 * 3283
//sqrt_n = 3590

//3590 * 3593 = 12898870  |
//242 * 234 = 56628       | 0.010625 ms
//1722 * 1728 = 2975616   | 0.011917 ms