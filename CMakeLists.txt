cmake_minimum_required(VERSION 3.21)
project(LPN_algorithms)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Boost 1.84.0 REQUIRED)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(
            main main.cpp
            project.cpp
            EratosthenesSieve/sieve.cpp
            TrialDivision/trialDiv.cpp
            Pseudoprimes/pseudoprimes.cpp
            Useful/algorithms.cpp
            Useful/profiler.cpp
            FermatsAlgorithm/fermatsFact.cpp
            PollardsAlgorithm/pollardAlg.cpp
            Tests/tests.cpp
            Tests/testTrialDivision.cpp
            Tests/testSieve.cpp
            Tests/testAlgorithms.cpp
            Tests/testFermatsAlgorithm.cpp
            Tests/testPollard.cpp
            Tests/testAKS.cpp
            Exceptions/except.cpp
            AKSAlgorithm/AKSAlg.cpp

    )
    target_link_libraries(main boost::boost)
endif()
