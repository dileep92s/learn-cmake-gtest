cmake_minimum_required (VERSION 3.2)

project (dummy_app)

MESSAGE ( "RUN CMAKE CONFIG" )

set (SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR} ./src)

# add to -I option
include_directories( inc )

# add to -L option
link_directories ( lib )

add_library ( squarenum STATIC ${SRC_DIR}/squarenum.cpp )
add_library ( addnum STATIC ${SRC_DIR}/addnum.cpp ${SRC_DIR}/squarenum.cpp )

add_executable ( ${PROJECT_NAME} ${SRC_DIR}/main.cpp )
target_link_libraries ( ${PROJECT_NAME} squarenum addnum )
