#include "algorithms.h"

namespace Project::Utils {

SmallInteger power_mod(SmallInteger base,
                                SmallInteger exp,
                                SmallInteger m) {
    SmallInteger n = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            n = (n * base) % m;
        exp /= 2;
        base = (base * base) % m;
    }
    return n;
}

SmallUInteger power_mod(SmallUInteger base,
                                 SmallUInteger exp,
                                 SmallUInteger m) {
    SmallUInteger n = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            n = (n * base) % m;
        exp /= 2;
        base = (base * base) % m;
    }
    return n;
}

LongInteger power_mod(const LongInteger& base,
                               const LongInteger& exp,
                               const LongInteger& m) {
    LongInteger n = 1, b = base, e = exp;
    while (e > 0) {
        if (e % 2 == 1)
            n = (n * b) % m;
        e /= 2;
        b = (b * b) % m;
    }
    return n;
}

LongInteger gcd(const LongInteger& num1, const LongInteger& num2) {
    return boost::math::gcd(num1, num2);
}


bool is_composite(SmallInteger n) {
    SmallInteger d = 2;
    while (d * d <= n) {
        if (n % d == 0)
            return true;
        d++;
    }
    return false; // n is prime or pseudoprime
}

bool is_composite(SmallUInteger n) {
    SmallUInteger d = 2;
    while (d * d <= n) {
        if (n % d == 0)
            return true;
        d++;
    }
    return false; // n is prime or pseudoprime
}


bool is_composite(const LongInteger& n) {
    LongInteger d = 2;
    while (d * d <= n) {
        if (n % d == 0)
            return true;
        d++;
    }
    return false; // n is prime or pseudoprime
}

LongInteger RandomGenerator::generate_number() {
    return ui_(mt_);;
}
}  // namespace Project::Utils
