#include "../project.h"
#include <map>

namespace TrialDivision {

int divide(TypeU64_t& f, TypeU32_t d, int& i);

std::map<TypeU64_t, int> factorize(const TypeU64_t& n, const TypeU64_t& max);

bool is_composite(TypeU64_t n);

}