project(Pouet)

include_directories(.)
#list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
#find_package(Eigen3 REQUIRED)
#include_directories(${EIGEN3_INCLUDE_DIR})
#add_subdirectory(Eigen)
#add_library(Eigen/Dense)
#link_directories(./Eigen)
add_executable(
    pouet
    #Eigen/Dense
    # Dense
    main.cpp
    Position.cpp
    Position.h
    Trilateration.cpp
    Trilateration.h
    )

#target_link_libraries(
#    pouet
#    Dense
#    )
