#include "../project.h"
#include <map>

namespace TrialDivision {

int divide(Project::LongInteger& f, Project::LongInteger d);

std::map<Project::LongInteger, int> factorize(const Project::LongInteger& n, const Project::LongInteger& max);

bool is_composite(Project::SmallUInteger n);

}
