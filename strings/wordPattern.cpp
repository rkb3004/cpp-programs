#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

bool wordPattern(const std::string& pattern, const std::string& s) {
    std::unordered_map<char, std::string> charToWord;
    std::unordered_map<std::string, char> wordToChar;
    std::istringstream stream(s);
    std::vector<std::string> words;
    std::string word;

    // Split the string `s` into words
    while (stream >> word) {
        words.push_back(word);
    }

    // If the number of words doesn't match the pattern length, return false
    if (words.size() != pattern.size()) {
        return false;
    }

    for (size_t i = 0; i < pattern.size(); ++i) {
        char c = pattern[i];
        const std::string& w = words[i];

        // Check if the character is already mapped to a word
        if (charToWord.count(c)) {
            if (charToWord[c] != w) {
                return false;
            }
        } else {
            charToWord[c] = w;
        }

        // Check if the word is already mapped to a character
        if (wordToChar.count(w)) {
            if (wordToChar[w] != c) {
                return false;
            }
        } else {
            wordToChar[w] = c;
        }
    }

    return true;
}

int main() {
    std::string pattern = "abba";
    std::string s = "dog cat cat dog";

    if (wordPattern(pattern, s)) {
        std::cout << "The string follows the pattern." << std::endl;
    } else {
        std::cout << "The string does not follow the pattern." << std::endl;
    }

    // Test cases
    std::cout << wordPattern("abba", "dog cat cat dog") << std::endl; // true
    std::cout << wordPattern("abba", "dog cat cat fish") << std::endl; // false
    std::cout << wordPattern("aaaa", "dog cat cat dog") << std::endl; // false
    std::cout << wordPattern("abba", "dog dog dog dog") << std::endl; // false

    return 0;
}