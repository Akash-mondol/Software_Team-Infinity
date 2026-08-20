#include <iostream>
using namespace std;

struct Student
{
    int id;
    char name[50];
    int age;
};

int main()
{
    Student student;

    cout << "Enter Student ID: ";
    cin >> student.id;

    cout << "Enter Student Name: ";
    cin >> student.name;

    cout << "Enter Student Age: ";
    cin >> student.age;

    cout << "\n--- Student Information ---" << endl;
    cout << "ID: " << student.id << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;

    return 0;
}