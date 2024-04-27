// TODO: Описать тип Date - с полями целого типа day (день), month (месяц) и year (год). Описать функцию leapYear(d) логического типа с параметром типа Date, возвращает true, если год в дате d является високосным, и false в противном случае.  Описать функцию daysInMonth(d) целого типа с параметром типа Date, которая возвращает количество дней для месяца, указанного в дате d. Описать функцию checkDate(d) целого типа с параметром типа Date, которая проверяет правильность даты,  указанной в параметре d. Если дата d является правильной, то функция возвращает 0; если в дате указан неверный номер месяца, то функция возвращает 1; если в дате указан неверный день для данного месяца, то возвращается 2. Описать функцию nextDate(d) с параметром типа Date, которая преобразует дату d к следующей дате (если дата d является неправильной, то она не изменяется). Аргумент d является входным и выходным параметром. Применить функцию nextDate к пяти данным датам.  

#include <iostream>

struct Date {
    int day;
    int month;
    int year;
};

bool leapYear(const Date& d) {
    return (d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0);
}

int daysInMonth(const Date& d) {
    switch (d.month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return leapYear(d) ? 29 : 28;
        default:
            return -1; // РќРµРєРѕСЂСЂРµРєС‚РЅС‹Р№ РЅРѕРјРµСЂ РјРµСЃСЏС†Р°
    }
}

int checkDate(const Date& d) {
    if (d.month < 1 || d.month > 12)
        return 1; // РќРµРІРµСЂРЅС‹Р№ РЅРѕРјРµСЂ РјРµСЃСЏС†Р°
    if (d.day < 1 || d.day > daysInMonth(d))
        return 2; // РќРµРІРµСЂРЅС‹Р№ РґРµРЅСЊ РґР»СЏ РґР°РЅРЅРѕРіРѕ РјРµСЃСЏС†Р°
    return 0; // Р’СЃРµ РїСЂРѕРІРµСЂРєРё РїСЂРѕР№РґРµРЅС‹ СѓСЃРїРµС€РЅРѕ
}

void nextDate(Date& d) {
    if (checkDate(d) != 0)
        return; // РќРµ РёР·РјРµРЅСЏРµРј РЅРµРїСЂР°РІРёР»СЊРЅС‹Рµ РґР°С‚С‹

    d.day++;
    if (d.day > daysInMonth(d)) {
        d.day = 1;
        d.month++;
        if (d.month > 12) {
            d.month = 1;
            d.year++;
        }
    }
}

void printDate(const Date& d) {
    std::cout << d.day << "." << d.month << "." << d.year << std::endl;
}

int main() {
    Date dates[] = {
        {28, 2, 2020}, // Р’РёСЃРѕРєРѕСЃРЅС‹Р№ РіРѕРґ
        {31, 12, 2021}, // РџРѕСЃР»РµРґРЅРёР№ РґРµРЅСЊ РіРѕРґР°
        {31, 4, 2022}, // РќРµРІРµСЂРЅС‹Р№ РјРµСЃСЏС†
        {29, 2, 2021}, // РќРµРІРµСЂРЅС‹Р№ РґРµРЅСЊ РґР»СЏ С„РµРІСЂР°Р»СЏ
        {31, 8, 2023} // РџСЂРѕСЃС‚Рѕ СЃР»РµРґСѓСЋС‰Р°СЏ РґР°С‚Р°
    };

    for (int i = 0; i < 5; ++i) {
        std::cout << "Before: ";
        printDate(dates[i]);

        nextDate(dates[i]);

        std::cout << "After: ";
        printDate(dates[i]);
        std::cout << std::endl;
    }

    return 0;
}
