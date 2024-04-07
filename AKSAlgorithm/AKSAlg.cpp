#include "AKSAlg.h"

void AKS::calculate_coefficients(Project::SmallInteger n) {
    coefficients.push_back(1);

    for (Project::SmallInteger i = 0; i < n; i++) {
        coefficients.push_back(1);

        for (int j = i; j > 0; j--)
            coefficients[j] = coefficients[j - 1] - coefficients[j];

        coefficients[0] = -coefficients[0];
    }
}

bool AKS::is_prime(Project::SmallInteger n)
{
    calculate_coefficients(n);

    // we should check all the coefficients except first and last
    coefficients[0]++;
    coefficients[n]--;

    // if n is composite => i > 0
    int i = n;
    while (i-- && coefficients[i] % n == 0);

    // n divides every coefficient => n is prime
    return i < 0;
}
