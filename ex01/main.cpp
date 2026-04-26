#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat a("Alice", 2);
        Form f("FormA", 5, 1);
        std::cout << a << std::endl;
        std::cout << f << std::endl;
        f.beSigned(a);
        std::cout << f << std::endl;
        // Uncomment to test exceptions:
        // Form bad("BadForm", 0, 151);
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
