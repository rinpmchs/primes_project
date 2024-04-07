#include "../project.h"

namespace UsefulAlgorithms {

Project::SmallInteger power_mod(Project::SmallInteger base, Project::SmallInteger exp, Project::SmallInteger m);

Project::SmallUInteger power_mod(Project::SmallUInteger base, Project::SmallUInteger exp, Project::SmallUInteger m);

Project::LongInteger power_mod(const Project::LongInteger& base,
                               const Project::LongInteger& exp,
                               const Project::LongInteger& m);

Project::LongInteger gcd(const Project::LongInteger& num1, const Project::LongInteger& num2);

bool is_composite(Project::SmallInteger n);

bool is_composite(Project::SmallUInteger n);

bool is_composite(const Project::LongInteger& n);

}
