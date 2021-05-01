add_library(HashLibrary md5.cpp sha1.cpp sha3.cpp sha256.cpp)

target_include_directories(HashLibrary INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
