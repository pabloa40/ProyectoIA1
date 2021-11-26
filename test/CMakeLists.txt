find_package(Boost COMPONENTS system filesystem unit_test_framework REQUIRED)

include_directories (${TEST_SOURCE_DIR}) 

ADD_DEFINITIONS(-DBOOST_TEST_DYN_LINK) 

add_executable (test test.cpp ${TEST_SOURCE_DIR}/iomatrix.cpp) 

target_link_libraries(test
                      ${Boost_FILESYSTEM_LIBRARY}
                      ${Boost_SYSTEM_LIBRARY}
                      ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
                      )

enable_testing()
add_test(MyTest test)