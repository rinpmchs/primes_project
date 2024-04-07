#include <chrono>

class Profiler {
public:
    static void start();
    static void finish();
    static std::chrono::milliseconds getExecutionTime();
    static double getExecutionTimeDouble();
private:
    static std::chrono::time_point<std::chrono::high_resolution_clock> executionStartTimestamp;
    static std::chrono::milliseconds totalExecutionTime;
    static std::chrono::duration<double, std::milli> totalExecTimeDbl;
};
