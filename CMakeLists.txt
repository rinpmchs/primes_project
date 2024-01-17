cmake_minimum_required(VERSION 3.21)
project(LPN_algorithms)

set(CMAKE_CXX_STANDARD 17)

set(Boost_INCLUDE_DIR /Users/ariko/boost_1_84_0)
set(Boost_LIBRARY_DIR /Users/ariko/boost_1_84_0/libs)
find_package(Boost 1.84.0 REQUIRED)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif()

add_executable(
        main main.cpp
        project.cpp
        EratosthenesSieve/sieve.cpp
        TrialDivision/trialDiv.cpp
        Pseudoprimes/pseudoprimes.cpp
        Useful/algorithms.cpp
        FermatsAlgorithm/fermatsFact.cpp
        PollardsAlgorithm/pollardAlg.cpp
        Tests/tests.cpp
        Tests/testTrialDivision.cpp
        Tests/testSieve.cpp
        Tests/testAlgorithms.cpp
        Tests/testFermatsAlgorithm.cpp
        Tests/testPollard.cpp
)
