#include <iostream>

int main(int argc, char** argv) {
    std::cout << "TrailSense — hello from CMake!\n";
    if (argc > 1) {
        std::cout << "Args:";
        for (int i = 1; i < argc; ++i) std::cout << ' ' << argv[i];
        std::cout << '\n';
    }
    return 0;
}
