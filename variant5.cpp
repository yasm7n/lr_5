#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Исходный список (сделаем четное и нечетное количество для теста)
    std::vector<double> numbers = {7.0, 2.5, 1.0, 9.0, 4.0, 3.0}; 
    
    std::cout << "Исходный список: ";
    for (double n : numbers) std::cout << n << " ";
    std::cout << "\n";

    if (numbers.empty()) {
        std::cout << "Список пуст.\n";
        return 0;
    }

    // Для нахождения медианы список обязательно нужно отсортировать
    std::sort(numbers.begin(), numbers.end());

    size_t n = numbers.size();
    double median;

    if (n % 2 != 0) {
        // Если нечетное количество, берем центральный элемент
        median = numbers[n / 2];
    } else {
        // Если четное, берем среднее арифметическое двух центральных
        median = (numbers[n / 2 - 1] + numbers[n / 2]) / 2.0;
    }

    std::cout << "Медиана: " << median << "\n";

    return 0;
}