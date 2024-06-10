#include "profiler.h"

namespace Project::Useful {

std::chrono::time_point<std::chrono::high_resolution_clock> Profiler::executionStartTimestamp;
std::chrono::milliseconds Profiler::totalExecutionTime;
std::chrono::duration<double, std::milli> Profiler::totalExecTimeDbl;

void Profiler::start() {
    Profiler::executionStartTimestamp = std::chrono::high_resolution_clock::now();
}

void Profiler::finish() {
    Profiler::totalExecutionTime = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::high_resolution_clock::now() - Profiler::executionStartTimestamp
    );

    Profiler::totalExecTimeDbl = std::chrono::high_resolution_clock::now() - Profiler::executionStartTimestamp;
}

std::chrono::milliseconds Profiler::getExecutionTime() {
    return Profiler::totalExecutionTime;
}

double Profiler::getExecutionTimeDouble() {
    return Profiler::totalExecTimeDbl.count();
}
}  // namespace Project::Useful
