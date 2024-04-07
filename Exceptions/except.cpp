#include "except.h"

namespace Except {
void handleException(const std::string& details) {
    try {
        throw; // rethrow to catch our exception
    } catch(std::exception& e) { // known std exceptions
        std::cout << "Error occurred at " << details << ", error: " << e.what() << std::endl;
        throw; // pass it to debugger
    } catch(...) { // other exceptions
        std::cout << "Unknown exception occurred at " << details << std::endl;
        throw; // pass it to debugger
    }
}
}