#include "Header.h"
void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << setw(55) << "Задание" << "\n";
    vector <Train> database;
    for (int i = 0; i < 2; i++)
    {
        addTrain(database);
    }
    allInfo(database);
    info_one_train(database);
}