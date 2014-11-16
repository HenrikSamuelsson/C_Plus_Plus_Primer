/**
 * \file
 *      create_array.cpp
 * \author
 *      Henrik Samuelsson
 */
#include <cstdlib>

/**
 * /brief
 *      Defines an array of ten integers.
 */
int main() {
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 0; ix < array_size; ++ix) {
        ia[ix] = ix;
    }
    return 0;
}

