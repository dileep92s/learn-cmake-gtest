cmake_minimum_required (VERSION 3.2)

project (dummy_app)

MESSAGE ( "RUN CMAKE CONFIG" )

set (SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR} ./src)
set (TST_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR} ./tst)

# add to -I option
include_directories( inc )

# add to -L option
link_directories ( lib )

add_library ( squarenum STATIC ${SRC_DIR}/squarenum.cpp )
add_library ( addnum STATIC ${SRC_DIR}/addnum.cpp ${SRC_DIR}/squarenum.cpp )

add_executable ( ${PROJECT_NAME} ${SRC_DIR}/main.cpp ${SRC_DIR}/AClass.cpp ${SRC_DIR}/BClass.cpp)
target_link_libraries ( ${PROJECT_NAME} squarenum addnum )

# ---------------------------------

project (test_dummy_app)
include_directories( gtest )
link_directories ( gtest )

add_executable ( test_dummy_app ${TST_SRC_DIR}/test_main.cpp ${TST_SRC_DIR}/mocks.cpp ${SRC_DIR}/addnum.cpp ${SRC_DIR}/AClass.cpp ${SRC_DIR}/BClass.cpp) 
target_link_libraries ( test_dummy_app gtest gmock gtest_main gmock_main pthread)