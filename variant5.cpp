#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Исходный список (сделаем четное и нечетное количество для теста)
    std::vector<double> numbers = {7.0, 2.5, 1.0, 9.0, 4.0, 3.0}; 
    
    std::cout << "Исходный список: ";
    for (double n : numbers) std::cout << n << " ";
    std::cout << "\n";
}