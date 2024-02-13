add_library(Animals animalClasses.cpp)
target_include_directories(Animals PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(animalsSpeak animalsSpeak.cpp)
target_link_libraries(animalsSpeak Animals)

find_package(Catch2 3 REQUIRED) # add 'PATHS /path/to/local/install' if required.  
