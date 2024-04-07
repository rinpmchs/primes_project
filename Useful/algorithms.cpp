#include "algorithms.h"

namespace UsefulAlgorithms {

Project::SmallInteger power_mod(Project::SmallInteger base, Project::SmallInteger exp, Project::SmallInteger m) {
    Project::SmallInteger n = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            n = (n * base) % m;
        exp /= 2;
        base = (base * base) % m;
    }
    return n;
}


Project::SmallUInteger power_mod(Project::SmallUInteger base, Project::SmallUInteger exp, Project::SmallUInteger m) {
    Project::SmallUInteger n = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            n = (n * base) % m;
        exp /= 2;
        base = (base * base) % m;
    }
    return n;
}

//12721121657520147247744796431842326146296294180809160027132416389225539366745

Project::LongInteger power_mod(const Project::LongInteger& base,
                               const Project::LongInteger& exp,
                               const Project::LongInteger& m) {
    Project::LongInteger n = 1, b = base, e = exp;
    while (e > 0) {
        if (e % 2 == 1)
            n = (n * b) % m;
        e /= 2;
        b = (b * b) % m;
    }
    return n;
}

Project::LongInteger gcd(const Project::LongInteger& num1, const Project::LongInteger& num2) {
    return boost::math::gcd(num1, num2);
}


bool is_composite(Project::SmallInteger n) {
    Project::SmallInteger d = 2;
    while (d * d <= n) {
        if (n % d == 0)
            return true;
        d++;
    }
    return false; // n is prime or pseudoprime
}

bool is_composite(Project::SmallUInteger n) {
    Project::SmallUInteger d = 2;
    while (d * d <= n) {
        if (n % d == 0)
            return true;
        d++;
    }
    return false; // n is prime or pseudoprime
}


bool is_composite(const Project::LongInteger& n) {
    Project::LongInteger d = 2;
    while (d * d <= n) {
        if (n % d == 0)
            return true;
        d++;
    }
    return false; // n is prime or pseudoprime
}
}
