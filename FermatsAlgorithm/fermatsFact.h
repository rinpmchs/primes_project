#include "../project.h"
//#include <cmath>

namespace FermatFact {

TypeU64_t squareroot(const TypeU64_t& n);

std::pair<TypeU64_t, TypeU64_t> factorize(const TypeU64_t& n);

}

//
//
//void fermatFactorization(long long N) {
//    if (N % 2 == 0) {
//        std::cout << "Number must be odd." << std::endl;
//        return;
//    }
//
//    long long a = ceil(sqrt(N));
//    long long b2 = a * a - N;
//
//    while (!isPerfectSquare(b2)) {
//        a++;
//        b2 = a * a - N;
//    }
//
//    long long b = sqrt(b2);
//    std::cout << "Factors are " << (a - b) << " and " << (a + b) << std::endl;
//}
//
//int main() {
//    long long N;
//    std::cout << "Enter an odd number to factorize: ";
//    std::cin >> N;
//
//    fermatFactorization(N);
//    return 0;
//}
