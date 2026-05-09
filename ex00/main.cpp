#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat a("Alice", 2);
        Bureaucrat b("Bob", 150);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        a.incrementGrade();
        std::cout << a << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
