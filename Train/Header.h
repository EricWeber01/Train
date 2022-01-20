#pragma once
#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
#include <time.h>
#include <iomanip>
using namespace std;
class Train
{
protected:
    int number;
    string departure, destination;
public:
    Train() :number(0), departure(0), destination(0) {}
    Train(const Train& copy) :number(copy.number), departure(copy.departure), destination(copy.destination) {}
    Train(int _number, string _departure, string _destination);
    int getNumber();
    string getDeparture();
    string getDestination();
    void operator = (Train other);
};
void addTrain(vector <Train>& a)
{
    int num;
    string station, time;
    cout << "Введите номер поезда ==> " << "\n";
    cin >> num;
    cin.ignore();
    cout << "Введите место назначения ==> " << "\n";
    cin >> station;
    cin.ignore();
    cout << "Введите время отправления ==> " << "\n";
    cin >> time;
    cin.ignore();
    a.push_back(Train(num, time, station));
}
void allInfo(vector <Train>& a)
{
    if (a.empty())
    {
        cout << "Список пуст! " << endl; return;
    }
    vector <Train>::iterator it = a.begin();
    cout << "Номер поезда  " << '\t' << " Время отправления " << '\t' << " Место назначения " << "\n";
    while (it != a.end())
    {
        cout << it->getNumber() << setw(25) << it->getDeparture() << setw(25) << it->getDestination() << '\n';
        it++;
    }
}
void info_one_train(vector<Train>a)
{
    int user_train;
    vector <Train>::iterator it = a.begin();
    cout << "Введите номер поезда ==> " << "\n";
    cin >> user_train;
    cin.ignore();
    if (it->getNumber() == user_train)
    {
        cout << it->getDestination() << '\t' << it->getDeparture() << "\n";
    }
    else
    {
        cout << "Поезд не найден" << "\n";
    }
}