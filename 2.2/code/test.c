#include <stdio.h>
#include <string.h>

// Функция, которая возвращает новую строку до последнего вхождения str2 в str1
char* getSubstringBeforeLastOccurrence(const char* str1, const char* str2) {
    char* result = NULL;

    // Найти последнее вхождение str2 в str1
    char* lastOccurrence = strrchr(str1, str2[0]);
    
    if (lastOccurrence != NULL) {
        // Вычислить длину подстроки до последнего вхождения
        size_t length = lastOccurrence - str1;
        
        // Выделить память для новой строки
        result = (char*)malloc((length + 1) * sizeof(char));

        // Копировать символы до последнего вхождения в новую строку
        strncpy(result, str1, length);
        
        // Добавить завершающий нулевой символ
        result[length] = '\0';
    }

    return result;
}

int main() {
    // Пример использования
    const char* str1 = "Hello, world, world";
    const char* str2 = "world!";

    char* result = getSubstringBeforeLastOccurrence(str1, str2);

    if (result != NULL) {
        printf("Результат: %s\n", result);
        free(result);  // Освободить память после использования
    } else {
        printf("Строка \"%s\" не содержит \"%s\"\n", str1, str2);
    }

    return 0;
}
