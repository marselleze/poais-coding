// TODO:  Известна следующая информация об n видах канцелярских принадлежностей в магазине (n – натуральное число): вид, цена, количество экземпляров,  имеющихся в наличии. После изменения экономической ситуации в стране, магазин поднял цены на все товары на 5%, кроме товаров, количество которых в остатке было меньше 5 штук. Отобразить новую таблицу характеристик канцелярских принадлежностей в магазине.  


#include <iostream>
#include <vector>
#include <iomanip>

struct Stationery {
    std::string type;
    double price;
    int quantity;
};

int main() {
    int n;
    std::cout << "Enter the number of statioeries: ";
    std::cin >> n;

    std::vector<Stationery> stationeries(n);

    // Р’РІРѕРґ РёРЅС„РѕСЂРјР°С†РёРё Рѕ РєР°РЅС†РµР»СЏСЂСЃРєРёС… РїСЂРёРЅР°РґР»РµР¶РЅРѕСЃС‚СЏС…
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter information about stationery #" << i + 1 << ":" << std::endl;
        std::cout << "Type: ";
        std::cin >> stationeries[i].type;
        std::cout << "Cost: ";
        std::cin >> stationeries[i].price;
        std::cout << "Number of items: ";
        std::cin >> stationeries[i].quantity;
    }

    // РР·РјРµРЅРµРЅРёРµ С†РµРЅ РІ Р·Р°РІРёСЃРёРјРѕСЃС‚Рё РѕС‚ РєРѕР»РёС‡РµСЃС‚РІР° РІ РЅР°Р»РёС‡РёРё
    for (int i = 0; i < n; ++i) {
        if (stationeries[i].quantity >= 5) {
            stationeries[i].price *= 1.05; // РЈРІРµР»РёС‡РµРЅРёРµ С†РµРЅС‹ РЅР° 5%
        }
    }

    // Р’С‹РІРѕРґ РЅРѕРІРѕР№ С‚Р°Р±Р»РёС†С‹ С…Р°СЂР°РєС‚РµСЂРёСЃС‚РёРє РєР°РЅС†РµР»СЏСЂСЃРєРёС… РїСЂРёРЅР°РґР»РµР¶РЅРѕСЃС‚РµР№
    std::cout << std::setw(10) << "Type" << std::setw(10) << "Cost" << std::setw(20) << "Number of items" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << std::setw(10) << stationeries[i].type << std::setw(10) << std::fixed << std::setprecision(2) << stationeries[i].price << std::setw(15) << stationeries[i].quantity << std::endl;
    }

    return 0;
}
