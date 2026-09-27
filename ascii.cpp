#include "iostream"
#include "iomanip"


int main() {

    std::cout << std::setw(15) << "ASCII table\n" << std::endl;
    std::cout << std::setw(5) << "Dec" << std::setw(6) << "Hex" << " Char\n";


    for (int i = 32; i < 127; i++) {
        std::cout << std::setw(5) << std::dec << i << std::setw(6) << std::hex << i << std::setw(4) << static_cast<char>(i) << "\n";
    }


    std::cout << "\n\n\nFor exit write any key and press ENTER" << std::endl;
    std::cin.get();
}