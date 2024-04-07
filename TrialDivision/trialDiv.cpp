#include "trialDiv.h"

namespace TrialDivision {

int divide(Project::LongInteger& f, Project::LongInteger d) {
    int pow = 0;
    while (f % d == 0) {
        f /= d;
        pow++;
    }
    return pow;
}

// works fine for numbers up to ten or eleven digits --> Project::SmallInteger is not enough
std::map<Project::LongInteger , int> factorize(const Project::LongInteger& n, const Project::LongInteger& max) {
    Project::LongInteger f = n; // still unfactored portion
    std::map<Project::LongInteger , int> factors;

    if (f % 2 == 0)
        factors[2] = divide(f, 2);
    if (f % 3 == 0)
        factors[3] = divide(f, 3);

    Project::LongInteger d = 5;
    int add = 2;
    while (d <= max && d * d <= f) {
        if (f % d == 0)
            factors[d] = divide(f, d);
        d += add;
        add = 6 - add;
    }

//    assert(f == n && "n is prime or pseudoprime");
    if (f != 1) {
        factors[f] = 1;
    }

    return factors;
}

bool is_composite(Project::SmallUInteger n) {
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0)
            return true;
        i++;
    }
    return false; // n may be prime or pseudoprime
}
}
