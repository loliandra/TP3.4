#include <iostream>
#include <vector>
#include <fstream>
#include "../Student.h"

using namespace  std;

vector<Student> st;
ifstream fin("input.txt");
ofstream fout("output.txt");


void read()
{
    while(!fin.eof())
    {
        Student st2;
        fin >> st2.surname;
        fin >> st2.name;
        fin >> st2.patronymic;
        fin >> st2.sex;
        fin >> st2.nationality;
        fin >> st2.height;
        fin >> st2.weight;
        fin >> st2.date;
        fin >> st2.phone_number;
        fin >> st2.zipCode;
        fin >> st2.country;
        fin >> st2.oblast;
        fin >> st2.zone;
        fin >> st2.city;
        fin >> st2.street;
        fin >> st2.house;
        fin >> st2.flat;
        fin >>st2.numberSchool;
        fin >>st2.numberClass;
        st.push_back(st2);
    }
}

void prind(Student str)
{
    fout << "Фамилия: " << str.surname << endl;
    fout << "Имя: " << str.name << endl;
    fout << "Отчество: " << str.patronymic << endl;
    fout << "Пол: " << str.sex << endl;
    fout << "Национальность: " << str.nationality << endl;
    fout << "Рост: " << str.height << endl;
    fout << "Вес: " << str.weight << endl;
    fout << "Дата рождения: " << str.date << endl;
    fout << "Номер телефона: " << str.phone_number << endl;
    fout << "______________Домашний адрес______________" << endl;
    fout << "Почтовый индекс: " << str.zipCode<<endl;
    fout << "Страна: " << str.country<<endl;
    fout << "Область " << str.oblast<<endl;
    fout << "Район " << str.zone<<endl;
    fout << "Город " << str.city << endl;
    fout << "Улица " << str.street << endl;
    fout << "Дом " << str.house << endl;
    fout << "Квартира " << str.flat << endl;
    fout << "Номер школы: " << str.numberSchool << endl;
    fout << "Номер класса: " << str.numberClass << endl;
    fout << endl;
    fout << "*****************************************" << endl;
    fout << endl;
}



void find()
{
    fout << "***************************" << endl;
    fout << "Информация об учениках 7го класса" << endl;
    fout << "***************************" << endl;
    for(int i = 0; i < st.size()-1; i++)
    {
        if(st[i].numberClass == 7 ){
            prind(st[i]);
        }
    }
}
void clear()
{
    st.clear();
}

