cmake_minimum_required(VERSION 3.21)
project(LPN_algorithms)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Boost 1.84.0 REQUIRED)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})

    include_directories(
            ${CMAKE_SOURCE_DIR}/EratosthenesSieve
            ${CMAKE_SOURCE_DIR}/FermatsAlgorithm
            ${CMAKE_SOURCE_DIR}/MillerRabin
            ${CMAKE_SOURCE_DIR}/PollardsAlgorithm
            ${CMAKE_SOURCE_DIR}/TrialDivision
            ${CMAKE_SOURCE_DIR}/Combinations
            ${CMAKE_SOURCE_DIR}/Exceptions
            ${CMAKE_SOURCE_DIR}/Utils
            ${CMAKE_SOURCE_DIR}/Tests
            ${CMAKE_SOURCE_DIR}/UseCases
    )

    add_executable(
            main main.cpp
            EratosthenesSieve/sieve.cpp
            TrialDivision/trialDiv.cpp
            Utils/algorithms.cpp
            Utils/profiler.cpp
            FermatsAlgorithm/fermatsFact.cpp
            PollardsAlgorithm/pollardAlg.cpp
            Tests/tests.cpp
            Tests/test_sieve.cpp
            Tests/test_fermatsFact.cpp
            Tests/test_trialDiv.cpp
            Tests/test_pollardAlg.cpp
            Tests/test_MillerRabin.cpp
            Tests/test_combination1.cpp
            Tests/test_combination2.cpp
            UseCases/usages.cpp
            UseCases/useTrialDivision.cpp
            UseCases/useSieve.cpp
            UseCases/useAlgorithms.cpp
            UseCases/useFermat.cpp
            UseCases/usePollard.cpp
            UseCases/useMillerRabin.cpp
            UseCases/useCombinations.cpp
            Combinations/combination1.cpp
            Combinations/combination2.cpp
            Exceptions/except.cpp
            MillerRabin/MillerRabin.cpp

    )
    target_link_libraries(main boost::boost)
endif()


#add_test(NAME example_test COMMAND example)
#
#find_package(GTest CONFIG REQUIRED)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

target_link_libraries(main GTest::gtest_main)
include(GoogleTest)

#add_test(NAME MyTest COMMAND main --gtest_output=xml:report.xml)