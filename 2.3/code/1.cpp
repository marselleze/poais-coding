// TODO: Дан текст. Определить частоту появления букв «а» в нем. Частота вычисляется как отношение количества данных символов в тексте к длине всего текста (пробелы учитываются, а символ конца строки не учитывается).

#include <iostream>
#include <string>

using namespace std;

int main(){
    double count;
    string str;
    

    getline(cin, str);

    for(int i = 0; str[i] && i < str.size(); i++){
        if(str[i] == 'a'){
            count++;
        }
    }
    double len = str.size();
    double freq = len / count;
    cout << freq;
}