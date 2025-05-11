#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

int main() {
    std::string str = "hello world";
    std::unordered_map<char, int> charCount;

    // Count occurrences of each character
    for (char c : str) {
        if (c != ' ') { // Ignore spaces
            charCount[c]++;
        }
    }

    // Print the character counts
    for (const auto& pair : charCount) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}