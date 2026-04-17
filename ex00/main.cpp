#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat a("Alice", 2);
        Bureaucrat b("Bob", 149);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        a.incrementGrade();
        std::cout << a << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
        // Uncomment to test exceptions:
        // Bureaucrat c("Charlie", 0);
        // Bureaucrat d("Dave", 151);
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
