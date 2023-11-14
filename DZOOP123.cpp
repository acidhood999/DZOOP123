// DZOOP123.cpp 

#include "FIOTEL.h"



int main()
{

    system("chcp 1251");
    system("cls");
   

    string namae{}, dopolinf{}, answer{};
    int telefonDom{}, telefonRab{};
    long long telefonMob{};
    vector <Fio> abonents{};

    do
    {
        ifstream inFile("INFOR.txt");
        string line;
        while (getline(inFile, line)) {
            Fio fio(line);
            abonents.push_back(fio);
        }
        inFile.close();

        

        cout << "Введите Имя Фамилие Отчество: ";
        getline(cin, namae);
        Fio fio(namae);
        abonents.push_back(fio);
        
        
        cout << "Введите домашний номер: ";
        cin >> telefonDom;
        DomTel teldom(telefonDom);

        cout << "Введите рабочий номер: ";
        cin >> telefonRab;
        RabTel telrab(telefonRab);

        cout << "Введите мобильный номер: ";
        cin >> telefonMob;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        MobTel telmob(telefonMob);

        cout << "Введите дополнительную информацию: ";
        getline(cin, dopolinf);
        DopInfo inform(dopolinf);
        cout << endl;


        fio.Name(fio);
        cout << endl;
        teldom.DomTel1(telefonDom);
        cout << endl;
        telrab.RabTel1(telefonRab);
        cout << endl;
        telmob.MobTel1(telefonMob);
        cout << endl;
        inform.info1(inform);

        cout << endl;
        cout << endl;

        cout << "Продолжить записывать абонентов? (Y/N) или (Да/Нет): ";
        cin >> answer;
        cin.ignore();
        cout << endl;

        ofstream outFile("INFOR.txt");
        for (const auto& abonent : abonents) {
            outFile << abonent.getName() << endl;
        }
        
        outFile.close();

    } while (answer == "Y" || answer == "y" || answer == "Да" || answer == "да");

    string searchName{};
    do
    {
        cout << "Введите Имя Фамилие Отчество абонента, которого хотите найти: ";
        getline(cin, searchName);
        bool found = false;
        for (const auto& abonent : abonents) {
            if (abonent.getName() == searchName) {
                cout << "Абонент найден по ФИО в книге: " << searchName << endl;
                found = true;
                break;
                
            }
        }
        if (!found) {
            cout << "Абонент не найден: " << searchName << endl;
        }
        cout << "Продолжить искать Абонента (Y/N) или (Да/Нет): ";
        cin >> answer;
        cin.ignore();
    } while (answer == "Y" || answer == "y" || answer == "Да" || answer == "да");
    
    
    
}