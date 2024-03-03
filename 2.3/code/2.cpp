// TODO: Дан текст на английском языке, слова в котором разделены одинарным символом пробела. Для каждой буквы алфавита вывести, в скольких словах этого текста она встречается с учетом регистра и сами слова (например, «a – 1: programming», «b – 0» и т. д). 

#include <iostream>
#include <string>
#include <vector>


int main() {
    std::string text = "Programming is Fun and Challenging";
    int upperLetterCount[26] = {0};  // Для букв верхнего регистра ('A' - 'Z')
    int lowerLetterCount[26] = {0};  // Для букв нижнего регистра ('a' - 'z')
    std::vector<std::string> words;

    size_t startPos = 0;
    size_t spacePos = text.find(' ');

    while (spacePos != std::string::npos) {
        words.push_back(text.substr(startPos, spacePos - startPos));
        startPos = spacePos + 1;
        spacePos = text.find(' ', startPos);
    }

    words.push_back(text.substr(startPos));

    for (const std::string& word : words) {
        for (char letter : word) {
            if (std::isupper(letter)) {
                upperLetterCount[letter - 'A']++;
            } else if (std::islower(letter)) {
                lowerLetterCount[letter - 'a']++;
            }
        }
    }

    for (char letter = 'A'; letter <= 'Z'; ++letter) {
        std::cout << letter << " - " << upperLetterCount[letter - 'A'] << ": ";
        for (const std::string& word : words) {
            if (word.find(letter) != std::string::npos) {
                std::cout << word << " ";
            }
        }
        std::cout << std::endl;
    }

    for (char letter = 'a'; letter <= 'z'; ++letter) {
        std::cout << letter << " - " << lowerLetterCount[letter - 'a'] << ": ";
        for (const std::string& word : words) {
            if (word.find(letter) != std::string::npos) {
                std::cout << word << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
