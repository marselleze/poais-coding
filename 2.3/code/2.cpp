// TODO: Дан текст на английском языке, слова в котором разделены одинарным символом пробела. Для каждой буквы алфавита вывести, в скольких словах этого текста она встречается с учетом регистра и сами слова (например, «a – 1: programming», «b – 0» и т. д). 

#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Enter the text: " << endl;
    string Text;
    getline(cin, Text);

    int count[26] = {0};

    char* p;
    p = strtok(Text, " ");
    
}