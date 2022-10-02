set(TEST_SOURCE_FILES DivideAndConquerAlgorithmTest.cpp BruteForceAlgorithmTest.cpp)
set(TESTABLE_SOURCE_FILES
        ../main/algorithms/DivideAndConquerAlgorithm.cpp
        ../main/algorithms/BruteForceAlgorithm.cpp
        ) # Note that we don't need to include main.cpp from production because we don't want to test our entry point

add_executable(FindMinMax_test ${TESTABLE_SOURCE_FILES} ${TEST_SOURCE_FILES})

# Executes our executable which contains our production source files and our test files using GTest main function
# Not using gtest_main is possible but we would need to write the test main function ourselves, see https://gist.githubusercontent.com/mawenbao/9223908/raw/10fd68efe5565da7b7e79dcc5fd9ed314bcb3aed/main.cpp for an implementation
target_link_libraries(
        FindMinMax_test
        gtest
        gtest_main
        pthread
)

include(GoogleTest)
gtest_discover_tests(FindMinMax_test)
