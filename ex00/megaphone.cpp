#include <iostream>
#include <string>

void to_uppercase(std::string &str) {
    for (size_t i = 0; i < str.length(); ++i) {
        str[i] = toupper(str[i]);
    }
}

int main(int argc, char **argv) {
    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            std::string input(argv[i]);
            to_uppercase(input);
            std::cout << input;
            if (i < argc - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return 0;
}
