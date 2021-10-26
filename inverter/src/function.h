#ifndef FUNCTION_H
#define FUNCTION_H
#include <array>
#include <vector>
#include <algorithm>
using std::array;

#include <string>
using std::string;

template <std::size_t SIZE>
void reverse( std::array<std::string,SIZE> & arr );

#include "function.cpp"
#endif
