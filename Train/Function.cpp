#include "Header.h"
Train::Train(int _number, string _departure, string _destination)
{
    number = _number;
    departure = _departure;
    destination = _destination;
}
int Train::getNumber()
{
    return number;
}
string Train::getDeparture()
{
    return departure;
}
string Train::getDestination()
{
    return destination;
}
void Train::operator = (Train other)
{
    number = other.number;
    departure = other.departure;
    destination = other.destination;
}