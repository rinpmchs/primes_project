#include "profiler.h"

namespace Project::Utils {
void Profiler::start() {
    executionStartTimestamp_ = std::chrono::high_resolution_clock::now();
}

void Profiler::finish() {
    totalExecTimeDbl_ = std::chrono::high_resolution_clock::now() - executionStartTimestamp_;
}

double Profiler::getExecutionTimeDouble() const {
    return totalExecTimeDbl_.count();
}
}  // namespace Project::Utils
