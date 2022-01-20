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
    cout << "������� ����� ������ ==> " << "\n";
    cin >> num;
    cin.ignore();
    cout << "������� ����� ���������� ==> " << "\n";
    cin >> station;
    cin.ignore();
    cout << "������� ����� ����������� ==> " << "\n";
    cin >> time;
    cin.ignore();
    a.push_back(Train(num, time, station));
}
void allInfo(vector <Train>& a)
{
    if (a.empty())
    {
        cout << "������ ����! " << endl; return;
    }
    vector <Train>::iterator it = a.begin();
    cout << "����� ������  " << '\t' << " ����� ����������� " << '\t' << " ����� ���������� " << "\n";
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
    cout << "������� ����� ������ ==> " << "\n";
    cin >> user_train;
    cin.ignore();
    if (it->getNumber() == user_train)
    {
        cout << it->getDestination() << '\t' << it->getDeparture() << "\n";
    }
    else
    {
        cout << "����� �� ������" << "\n";
    }
}