#include "../project.h"

class AKS {

public:
    // Calculate the coefficients of (x - 1)^n - (x^n - 1)
    void calculate_coefficients(Project::SmallInteger n);
    bool is_prime(Project::SmallInteger n);
    void test_AKS();

private:
    std::vector<Project::SmallInteger> coefficients = {};
};