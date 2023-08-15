#include <iostream>
template<class Ty,size_t size>
struct array {
    Ty* begin() { return arr; };
    Ty* end() { return arr + size; };
    Ty arr[size];
};

template<class T_, class... U_>
array(T_, U_...) -> array<T_, 1 + sizeof...(U_)>;

int main() {
    ::array arr{1, 2, 3, 4, 5};
    for (const auto& i : arr) {
        std::cout << i << ' ';
    }
}
