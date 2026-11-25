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

    if (numbers.empty()) return 0;

        int shift = k % numbers.size();

    if (direction == "left" || direction == "влево") {
        // Сдвиг влево
        std::rotate(numbers.begin(), numbers.begin() + shift, numbers.end());
    } else {
        // Сдвиг вправо
        std::rotate(numbers.begin(), numbers.end() - shift, numbers.end());
    }

    std::cout << "Результат: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << "\n";

    return 0;
}