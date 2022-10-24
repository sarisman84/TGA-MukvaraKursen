#pragma once
#include <chrono>

#define START_TIMER(ID, Name) std::chrono::steady_clock::time_point ID = std::chrono::steady_clock::now();  \
std::cout << Name << " Started\n";
#define END_TIMER_AND_PRINT(ID, Name) {std::chrono::steady_clock::time_point endTime = std::chrono::steady_clock::now(); \
typedef std::chrono::milliseconds milliseconds;\
milliseconds ms = std::chrono::duration_cast<milliseconds>(endTime - ID);\
std::cout << "Elapsed: " << ms.count() << "ms\n"; \
std::cout << Name << " Ended\n\n";}