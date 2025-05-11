#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

int main() {
    std::vector<std::string> words = {"apple", "banana", "orange", "apple", "banana", "banana"};
    std::unordered_map<std::string, int> wordCount;

    // Count occurrences of each word
    for (const auto& word : words) {
        wordCount[word]++;
    }

    // Print the word counts
    for (const auto& pair : wordCount) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}