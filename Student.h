#ifndef Student_h
#define Student_h
#include <vector>
using namespace std;

struct Student{
    int height;
    int weight;
    int numberSchool;
    int numberClass;
    int zipCode;
    int house;
    int flat;
    string surname;
    string name;
    string patronymic;
    string sex;
    string nationality;
    string date;
    string phone_number;
    string city;
    string country;
    string oblast;
    string zone;
    string street;
};

void read();
void find();
void clear();

#endif /* Student_h */

