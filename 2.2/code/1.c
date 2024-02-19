// TODO: Даны две строки str1 и str2. Получить новую строку, в которой записаны все символы строки str1 до последнего вхождения строки str2 в str1. 

#include <stdio.h>
#include <string.h>

int main(){
    const int n = 255;
    // Создаем строки
    char str1[255] = "Hello, world, world!";
    char str2[255] = "world";

    //Находим последнее вхождение str2 в str1
    char* lastOccurrence = strrchr(str1, *str2);
    // Выделяем память под новую строку
    int lenght = lastOccurrence - str1;
    char str3[n];
    memset(str3, '\0', n);
    // Копируем в новую строку все символы str1 до последнего вхождения str2
    strncpy(str3, str1, lenght);
    // Выводим результат
    printf("Result: %s\n", str3);

}

