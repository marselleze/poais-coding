// TODO: Дан текст. Определить частоту появления букв «а» в нем. Частота вычисляется как отношение количества данных символов в тексте к длине всего текста (пробелы учитываются, а символ конца строки не учитывается).

#include <iostream>
#include <string>

using namespace std;

int main(){
     std::string inputText;

    // Ввод текста
    std::cout << "Input text: ";
    std::getline(std::cin, inputText);

    size_t pos = inputText.find_first_of("aA");
    size_t countA3 = 0;
    while (pos != std::string::npos) {
        countA3++;
        pos = inputText.find_first_of("aA", pos + 1);
    }

    // Вычисление длины текста (учитывая пробелы)
    size_t textLength = inputText.size();

    // Проверка деления на ноль перед вычислением частоты
    double frequency = (textLength > 0) ? static_cast<double>(countA3) / textLength : 0.0;

    // Вывод результата
    std::cout << "Frequency of 'a': " << frequency << std::endl;

    return 0;

}