#include <iostream>
#include <cctype>

// Function to check if a string is a palindrome
bool isPalindrome(const std::string& str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        // Skip non-alphanumeric characters from the beginning
        while (start < end && !isalnum(str[start])) {
            start++;
        }

        // Skip non-alphanumeric characters from the end
        while (start < end && !isalnum(str[end])) {
            end--;
        }

        // Compare characters (case-insensitive)
        if (tolower(str[start]) != tolower(str[end])) {
            return false;
        }

        // Move to the next pair of characters
        start++;
        end--;
    }

    return true;
}

int main() {
    std::string input;

    // Read a string from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Check if the input string is a palindrome
    if (isPalindrome(input)) {
        std::cout << "\"" << input << "\" is a palindrome.\n";
    } else {
        std::cout << "\"" << input << "\" is not a palindrome.\n";
    }

    return 0;
}
