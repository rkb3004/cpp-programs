#include <iostream>
#include <string>

// Function to convert Excel column title to corresponding column number
int titleToNumber(const std::string& columnTitle) {
    int result = 0;
    
    for (char c : columnTitle) {
        // Convert each character to its 1-based position in the alphabet
        // A=1, B=2, ..., Z=26
        int value = c - 'A' + 1;
        
        // For each position, multiply the current result by 26 (base of the number system)
        // and add the value of the current character
        result = result * 26 + value;
    }
    
    return result;
}

int main() {
    std::string columnTitle;
    std::cout << "Enter Excel column title: ";
    std::cin >> columnTitle;
    
    int columnNumber = titleToNumber(columnTitle);
    std::cout << columnTitle << " corresponds to column number: " << columnNumber << std::endl;
    
    // Test cases
    std::cout << "A -> " << titleToNumber("A") << std::endl;    // 1
    std::cout << "B -> " << titleToNumber("B") << std::endl;    // 2
    std::cout << "Z -> " << titleToNumber("Z") << std::endl;    // 26
    std::cout << "AA -> " << titleToNumber("AA") << std::endl;  // 27
    std::cout << "AB -> " << titleToNumber("AB") << std::endl;  // 28
    std::cout << "ZY -> " << titleToNumber("ZY") << std::endl;  // 701
    std::cout << "ZZ -> " << titleToNumber("ZZ") << std::endl;  // 702
    std::cout << "AAA -> " << titleToNumber("AAA") << std::endl;// 703
    
    return 0;
}