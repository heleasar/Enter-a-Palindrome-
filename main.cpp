#include <iostream>
#include <string>
#include <cctype>

bool is_palindrome(const std::string& s) {
    std::string cleaned;
    for (char c : s) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
    }

    int i = 0;
    int j = cleaned.length() - 1;

    while (i < j) {
        if (cleaned[i] != cleaned[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main() {
    char continue_input;

    do {
        std::string user_input;
        std::cout << "Enter a string: ";
        std::cin >> user_input;

        if (is_palindrome(user_input)) {
            std::cout << "You entered a palindrome" << std::endl;
        } else {
            std::cout << "You did not enter a palindrome" << std::endl;
        }

        std::cout << "Do you want to continue (Y/y)? ";
        std::cin >> continue_input;

        std::cout << "****************************************" << std::endl;

    } while (continue_input == 'Y' || continue_input == 'y');

    return 0;
}
