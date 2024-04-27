// TODO: Создайте перечисляемый тип, описывающий военные звания.
//TODO: Создать не в main, а 2 функции которые деллают конвертаци.
#include <iostream>

enum class MilitaryRank {
    Private,
    LanceCorporal,
    Corporal,
    Sergeant,
    StaffSergeant,
    SergeantMajor,
    WarrantOfficer,
    JuniorLieutenant,
    Lieutenant,
    SeniorLieutenant,
    Captain,
    Major,
    LieutenantColonel,
    Colonel,
    MajorGeneral,
    LieutenantGeneral,
    General,
    Marshal
};

//
int main() {
    setlocale(LC_ALL, "Russian");
    MilitaryRank rank = MilitaryRank::Lieutenant;

    switch (rank) {
        case MilitaryRank::Private:
            std::cout << "Рядовой" << std::endl;
            break;
        case MilitaryRank::LanceCorporal:
            std::cout << "Ефрейтор" << std::endl;
            break;
        case MilitaryRank::Corporal:
            std::cout << "Капрал" << std::endl;
            break;
        case MilitaryRank::Sergeant:
            std::cout << "Сержант" << std::endl;
            break;
        case MilitaryRank::StaffSergeant:
            std::cout << "Старший сержант" << std::endl;
            break;
        case MilitaryRank::SergeantMajor:
            std::cout << "Старшина" << std::endl;
            break;
        case MilitaryRank::WarrantOfficer:
            std::cout << "Прапорщик" << std::endl;
            break;
        case MilitaryRank::JuniorLieutenant:
            std::cout << "Младший лейтенант" << std::endl;
            break;
        case MilitaryRank::Lieutenant:
            std::cout << "Лейтенант" << std::endl;
            break;
        case MilitaryRank::SeniorLieutenant:
            std::cout << "Старший лейтенант" << std::endl;
            break;
        case MilitaryRank::Captain:
            std::cout << "Капитан" << std::endl;
            break;
        case MilitaryRank::Major:
            std::cout << "Майор" << std::endl;
            break;
        case MilitaryRank::LieutenantColonel:
            std::cout << "Подполковник" << std::endl;
            break;
        case MilitaryRank::Colonel:
            std::cout << "Полковник" << std::endl;
            break;
        case MilitaryRank::MajorGeneral:
            std::cout << "Генерал-майор" << std::endl;
            break;
        case MilitaryRank::LieutenantGeneral:
            std::cout << "Генерал-лейтенант" << std::endl;
            break;
        case MilitaryRank::General:
            std::cout << "Генерал-полковник" << std::endl;
            break;
        case MilitaryRank::Marshal:
            std::cout << "Маршал Российской Федерации" << std::endl;
            break;
        default:
            std::cout << "Неизвестное звание" << std::endl;
    }

    return 0;
}
