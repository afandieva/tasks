#include <iostream>
#include <string>
#include <map>
#include <unordered_set>
#include <cctype>

bool isLoveWord(const std::string& word) {
    std::unordered_set<std::string> loveWords {"любовь", "Любовь", "любви", "Любви", "любовью", "Любите", "любят", "Любят", "любил", "Любил", "любила", "Любила", "любило", "Любило", "любили", "Любили", "любящий", "Любящий"
};
    return loveWords.find(word) != loveWords.end();
}

std::string cleanWord(std::string& word) {
    std::string result;
    for (char c : word) {
        if (!std::ispunct(c)) {
            c = std::tolower(c);
            result += c;
        }
    }
    return result;
}

int main() {
    std::map<std::string, int> loveWordsCount;
    
    std::string word;
    int totalLoveWords = 0;
    
    while (std::cin >> word) {
        word = cleanWord(word);
        if (isLoveWord(word)) {
            loveWordsCount[word]++;
        }
    }

    for (const auto& [word, count] : loveWordsCount) {
        std::cout << word << " " << count << "\n";
        totalLoveWords += count;
    }

    std::cout << "Count love words: " << totalLoveWords << "\n"; 
    
    int rafaelloBoxes = totalLoveWords / 1000;
    int candies = (totalLoveWords - rafaelloBoxes * 1000) / 15;

    if (rafaelloBoxes > 0) {
        std::cout << "Rafaello box: " << rafaelloBoxes << "\n";
        if (candies > 0) {
            std::cout << "And " << candies << " candy\n";
        }
    } else {
        std::cout << candies << " candy\n";
    }

    return 0;
}
