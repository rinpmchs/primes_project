#include <chrono>

namespace Project::Utils {
class Profiler {
private:
    using TimePoint = std::chrono::time_point<std::chrono::high_resolution_clock>;
    using Duration = std::chrono::duration<double, std::milli>;

public:
//    Profiler()
//            : executionStartTimestamp_(), totalExecTimeDbl_(0) {
//    }
    void start();
    void finish();
    double getExecutionTimeDouble() const;

private:
    TimePoint executionStartTimestamp_;
    Duration totalExecTimeDbl_;
};
}  // namespace Project::Utils
