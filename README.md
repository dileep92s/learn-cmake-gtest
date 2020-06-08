# learn-cmake-gtest
learn cmake and google test

This project contains an example to demonstrate how to mock C function with Google test and gmock.
Since the EXPECT_CALL requires a class as first argument, it is not possible to directly mock a C function.
We need to create a dummy class as shown in the mocks.cpp and mocks.hpp.

gtest - Contains pre compiled libraries, it may not work on ther computers. 
        Please clone gtest repo, rebuild and place the libraries and includes in this directory.
