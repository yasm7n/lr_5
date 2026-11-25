#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    // Исходный список (вектор)
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};
    int k;
    std::string direction;

    std::cout << "Исходный список: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << "\nВведите K (на сколько сдвинуть): ";
    std::cin >> k;
    std::cout << "Направление (left/right): ";
    std::cin >> direction;

    std::cout << "Результат: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << "\n";

    return 0;
}