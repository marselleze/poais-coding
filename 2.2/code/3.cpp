// TODO: 21. Написать функцию, формирующую строку из исходной,  используя шифр Цезаря (каждая буква заменяется на следующую по алфавиту через K позиций по кругу). Функция должна иметь прототип:  char* str(char* str, int k), где str – строка-источник, k – код шифра. При определении функции задачи 3 недопустимо использовать строковые функции и операцию индексации. Обеспечить возможность ввода пользователем данных, вызов описанной функции и вывод результата ее работы. 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

char* str(char* str, int k){
    char* ptr = str;

    while (*ptr != 0){
        if((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z')){
            if(*ptr >= 'A' && *ptr <= 'Z'){
                *ptr = ((*ptr - 'A' + k) % 26) + 'A';
            }
            else{
                *ptr = ((*ptr - 'a' + k) % 26) + 'a';
            }
        }
        ptr++;
    }

    return str;
}

int main(){
    char input[100];
    int k;
    
    printf("Enter string: ");
    scanf("%s", input);

    printf("Enter the code of cipher: ");
    scanf("%d", &k);

    char* res = str(input, k);

    printf(res);

}