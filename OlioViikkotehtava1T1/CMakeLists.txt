cmake_minimum_required(VERSION 3.16)

project(OlioViikkotehtava1T1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(OlioViikkotehtava1T1 main.cpp)

include(GNUInstallDirs)
install(TARGETS OlioViikkotehtava1T1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
