// TODO: Дан текст на английском языке, слова в котором разделены одинарным символом пробела. Для каждой буквы алфавита вывести, в скольких словах этого текста она встречается с учетом регистра и сами слова (например, «a – 1: programming», «b – 0» и т. д). 

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>


using namespace std;


using namespace std;
 
int main()
{
    string str = "Geeks for Geeks";
 
    vector <string> v;
 
    int start, end;
    start = end = 0;
    int letterCount[52] = {0};
 
    char dl = ' ';
 
    while ((start = str.find_first_not_of(dl, end)) != string::npos) {
        
        end = str.find(dl, start);
        
        v.push_back(str.substr(start, end - start));
    }

    for()
 
    
 
    return 0;
}