// TODO: Дан текст, слова в котором разделены одинарным символом пробела, и целое n. Вывести на экран все слова длины n.

#include <iostream>
#using <mscorlib.dll>

using namespace System;

int main() {
    // Считываем текст
    Console::Write("Введите текст: ");
    String^ inputText = Console::ReadLine();

    // Считываем длину слова n
    Console::Write("Введите длину слова n: ");
    int n;
    if (!Int32::TryParse(Console::ReadLine(), n) || n <= 0) {
        Console::WriteLine("Ошибка: Введите корректное положительное число.");
        return 1;
    }

    // Разбиваем текст на слова
    array<Char>^ delimiterChars = {' '};
    array<String^>^ words = inputText->Split(delimiterChars, StringSplitOptions::RemoveEmptyEntries);

    // Выводим слова длины n
    Console::Write("Слова длины {0}: ", n);
    for each (String^ word in words) {
        if (word->Length == n) {
            Console::Write(word + " ");
        }
    }

    return 0;
}

