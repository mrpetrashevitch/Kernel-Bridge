cmake_minimum_required(VERSION 3.22)
project(kb)

add_library(${PROJECT_NAME} STATIC
    User-Bridge/API/User-Bridge.cpp
    User-Bridge/API/SymParser.cpp
    User-Bridge/API/Rtl-Bridge.cpp
    User-Bridge/API/DriversUtils.cpp
    User-Bridge/API/CommPort.cpp
    User-Bridge/API/PEUtils/PELoader.cpp
    User-Bridge/API/PEUtils/PEAnalyzer.cpp 
)

target_include_directories(${PROJECT_NAME} PUBLIC
     ${CMAKE_CURRENT_SOURCE_DIR}/User-Bridge/API
     ${CMAKE_CURRENT_SOURCE_DIR}/User-Bridge/API/PEUtils
     ${CMAKE_CURRENT_SOURCE_DIR}/SharedTypes
)

target_compile_definitions(${PROJECT_NAME} PUBLIC UNICODE _UNICODE)