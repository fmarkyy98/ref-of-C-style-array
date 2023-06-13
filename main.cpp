#include <iostream>
#include <assert.h>

#define UNUSED(x) (void)x

template<typename T, std::size_t N>
constexpr size_t arr_len(T (&array)[N]) {
    UNUSED(array);
    return N;
}

int main() {
    constexpr int t[] = {1,2,3,4,5};

    std::cout << sizeof(t) / sizeof(t[0]) << " vs " << arr_len(t);
    assert(sizeof(t) / sizeof(t[0]) == arr_len(t));
}