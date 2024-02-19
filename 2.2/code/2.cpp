// TODO: Дан текст. Определить частоту появления букв "а" в нем. Частота вычисляется как отношение количества данных символов в тексте к длине всего текста (пробелы учитываются, а символ конца строки не учитывается).

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    double count = 0;
    char s[10];
    char str[] = "Computers are probably the most versatile tools that humanity has at its disposal. They are capable of performing incredible calculations, they allow you to store a huge amount of information, completely in different parts of the planet, and at the same time easily exchange it, regardless of location.";
    for(int i = 0; str[i] && i < sizeof(str); i++){
        if(str[i] == 'a')
            count++;
    }
    double len = (sizeof(str) - 1);
    double freq = len / count;
    sprintf(s, "%f", freq);
    printf(s);
} 