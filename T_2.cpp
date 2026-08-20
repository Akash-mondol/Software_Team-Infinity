#include <iostream>
using namespace std;

struct Student
{
    int id;
    char name[50];
    int age;
    float cgpa;
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

    cout << "Enter Student CGPA: ";
    cin >> student.cgpa;

    cout << "\n--- Student Information ---" << endl;
    cout << "ID: " << student.id << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "CGPA: " << student.cgpa << endl;

    return 0;
}