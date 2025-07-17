#ifndef UTILS_H
#define UTILS_H
#include <iostream>
#include <thread>
#include <chrono>
#ifdef _WIN32
    #include <windows.h>
    #define CLEAR "cls"
#else
    #include <unistd.h>
    #define CLEAR "clear"
#endif

inline void pause() {
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
    std::cin.get();
}

inline void clearScreen() {
    system(CLEAR);
}

#endif