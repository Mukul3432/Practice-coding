#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    int limit = static_cast<int>(std::sqrt(n));
    for (int i = 5; i <= limit; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "Enter an integer: ";
    int value;
    if (!(std::cin >> value)) {
        std::cerr << "Invalid input\n";
        return 1;
    }

    if (isPrime(value)) {
        std::cout << value << " is prime.\n";
    } else {
        std::cout << value << " is not prime.\n";
    }

    return 0;
}
