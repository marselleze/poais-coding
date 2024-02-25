#include <iostream>
#include <string>

using namespace std;

int main() {
    // Считываем текст
    cout << "Введите текст на английском языке: ";
    string inputText;
    getline(cin, inputText);

    // Инициализируем массив для хранения информации о встречаемости букв
    int letterCount[26] = {0};

    // Разбиваем текст на слова
    string word;
    size_t wordStart = 0;
    for (size_t i = 0; i <= inputText.length(); ++i) {
        if (i == inputText.length() || !isalpha(inputText[i])) {
            // Найден конец слова
            if (wordStart < i) {
                for (size_t j = wordStart; j < i; ++j) {
                    char currentChar = tolower(inputText[j]);
                    letterCount[currentChar - 'a']++;
                }
            }

            // Начинаем следующее слово
            wordStart = i + 1;
        }
    }

    // Выводим результат
    for (char letter = 'a'; letter <= 'z'; ++letter) {
        cout << letter << " - " << letterCount[letter - 'a'] << ": ";
        bool found = false;
        wordStart = 0;
        for (size_t i = 0; i <= inputText.length(); ++i) {
            if (i == inputText.length() || !isalpha(inputText[i])) {
                if (wordStart < i) {
                    for (size_t j = wordStart; j < i; ++j) {
                        char firstChar = tolower(inputText[j]);
                        if (firstChar == letter) {
                            if (found) {
                                cout << ", ";
                            }
                            cout << inputText.substr(wordStart, i - wordStart);
                            found = true;
                            break;
                        }
                    }
                }
                wordStart = i + 1;
            }
        }
        if (!found) {
            cout << "No words";
        }
        cout << endl;
    }

    return 0;
}
